''' pyeps is a python function library for storing numpy arrays in memory 

    Functions: 
          Store2df allocates memory and copies 2D numpy array into memory 
          Store1df allocates memory and copies 1D numpy array into memory
          Store1di allocates memory and copies 1D integer array into memory
          Store1ds allocates memory and copies 1D char array into memory
          Get2df   Copies 2d array and deletes allocated memory
          Dims2df  Returns dimensions of eps array 
          Fzeros   Creates numpy 32 bit float array
          Fzeros   Creates numpy 32 bit int    array
 
'''

import numpy as np
from ctypes import *


def setup(libpath) :
  
  ''' setup loads the object library 

    Parameters:
       libpath:    FULL path to the shared library 
                f.ex if the name of the library is pylib.so
                and it is installed in "/home/barn/Bin"
                the path would be "/home/barn/Bin/pylib.so".
   
     Returns:
       reference to the shared library
  '''

  cdll.LoadLibrary(libpath)
  pylib = CDLL(libpath)

  #Initialize I/O
  pylib.LibeInit()

  return pylib


# Eps interface for a  struct is via a class

# Class for 1d array of ints
class epsarray1di(Structure) :
 _fields_ = [("d", ARRAY(c_int,1)),("a",POINTER(c_int))] 

# Class for 2d array of ints
class epsarray2di(Structure) :
 _fields_ = [("d", ARRAY(c_int,2)),("a",POINTER(c_int))] 

# Class for 1d array of floats
class epsarray1df(Structure) :
 _fields_ = [("d", ARRAY(c_int,1)),("a",POINTER(c_float))] 

# Class for 2d array of floats
class epsarray2df(Structure) :
 _fields_ = [("d", ARRAY(c_int,2)),("a",POINTER(c_float))] 

# Class for strings
class epsarrays(Structure) :
 _fields_ = [("d", ARRAY(c_int,1)),("a",c_char_p)] 

def Izeros(dims) :
  ''' Izeors crates integer 32 bit array

      Parameters :
        dims   :  List of dimensions

      Returns:
        integer 32 bit array with dimensions dims.

  '''

  return(np.zeros(dims,dtype=np.int32,order='F'))

def Fzeros(dims) :
  ''' Fzeros creates float  32 bit array

      Parameters :
        dims   :  List of dimensions

      Returns:
        float 32 bit array with dimensions dims.

  '''

  return(np.zeros(dims,dtype=np.float32,order='F'))

def Bytes(dims) :
  ''' Bytes creates a byte array

      Parameters :
        dims   :  Length of array

      Returns:
        bytearray

  '''

  return(bytearray([0]*dims))
  

def Store1di(pyeps,arr):
  ''' Store1di allocates memory and copies 1D integer arr into memory
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 1D integer array
  '''
  
  # Set the argument and return type of the memory allocator
  pyeps.PyepsCre1di.argtypes=[c_int]
  pyeps.PyepsCre1di.restype=c_void_p
  nx = arr.shape[0]

  # Allocate memory for the eps array
  out = pyeps.PyepsCre1di(nx) 
  
  # Fill in the eps array descriptor with
  # dimensions and data
  epsarr = epsarray1di()
  epsarr.a = arr.ctypes.data_as(POINTER(c_int32))
  epsarr.d[0]=nx
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1di
  pyeps.PyepsCopy1di.argtypes=[POINTER(epsarray1di),c_void_p]
  pyeps.PyepsCopy1di.restype=c_int

  # Copy the numpy array into the eps array
  pyeps.PyepsCopy1di(epsarr,out)
  
  return(out)

def Get1di(pyeps,arr,out):
  ''' Get1di copies a 1D eps array into a numpy array
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : input 1D eps array
        out     : output numpy array
        
      Return :
        returns numpy array
          
  '''

  # Fill in the eps array descriptor with
  # dimensions and data
  nx = Dims1di(arr)
  epsarr = epsarray1di()
  epsarr.a = out.ctypes.data_as(POINTER(c_int32))
  epsarr.d[0]=nx
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1di
  pyeps.PyepsCopy1di.argtypes=[c_void_p,POINTER(epsarray1di)]
  pyeps.PyepsCopy1di.restype=c_int

  # Copy eps array into numpy array
  pyeps.PyepsCopy1di(arr,epsarrp)

  return(True)

def Dims1di(arr):
  ''' Dims1di get the length of a 1d int eps array
  
      Parameters:
        arr           : 1D eps array
        
      Return :
        returns the length
          
  '''

  narr = cast(arr,POINTER(epsarray1di))
  nx = (narr.contents).d[0]
  return(nx)

def Store2di(pyeps,arr):
  ''' Store2df allocates memory and copies 2D numpy arr into memory
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 2D numpy array
        
      Return :
        2D eps array
          
  '''

  # Set the argument and return type of the memory allocator
  pyeps.PyepsCre2df.argtypes=[c_int,c_int]
  pyeps.PyepsCre2df.restype=c_void_p
  nx = arr.shape[0]
  ny = arr.shape[1]

  # Allocate memory for the eps array
  out = pyeps.PyepsCre2di(nx,ny) 

  # Fill in the eps array descriptor with
  # dimensions and data
  epsarr = epsarray2di()
  epsarr.a = arr.ctypes.data_as(POINTER(c_int32))
  epsarr.d[0]=nx
  epsarr.d[1]=ny
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy2di
  pyeps.PyepsCopy2di.argtypes=[POINTER(epsarray2di),c_void_p]
  pyeps.PyepsCopy2di.restype=c_int

  # Copy the numpy array into the eps array
  pyeps.PyepsCopy2di(epsarr,out)
  
  return(out)

def Get2di(pyeps,arr,out):
  ''' Get2di copies a 2D eps array into a numpy array
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 2D eps array
        
      Return :
        numpy array
          
  '''

  # Fill in the eps array descriptor with
  # dimensions and data

  dim=Dims2di(arr)
  epsarr = epsarray2di()
  epsarr.a = out.ctypes.data_as(POINTER(c_int32))
  epsarr.d[0]=dim[0]
  epsarr.d[1]=dim[1]
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy2di
  pyeps.PyepsCopy2di.argtypes=[c_void_p,POINTER(epsarray2di)]
  pyeps.PyepsCopy2di.restype=c_int

  # Copy eps array into numpy array
  pyeps.PyepsCopy2di(arr,epsarrp)

  return(True)

def Dims2di(arr):
  ''' Dims2di get the length of a 2d int array
  
      Parameters:
        arr           : 2D eps array
        
      Return :
        returns a tuple with first and second dimension
          
  '''

  narr = cast(arr,POINTER(epsarray2di))
  n1 = (narr.contents).d[0]
  n2 = (narr.contents).d[1]
  return (n1,n2)

def Store1df(pyeps,arr):
  ''' Store1df allocates memory and copies 1D numpy arr into memory
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 1D numpy array
  '''

  # Set the argument and return type of the memory allocator
  pyeps.PyepsCre1df.argtypes=[c_int]
  pyeps.PyepsCre1df.restype=c_void_p
  nx = arr.shape[0]

  # Allocate memory for the eps array
  out = pyeps.PyepsCre1df(nx) 
  
  # Fill in the eps array descriptor with
  # dimensions and data
  epsarr = epsarray1df()
  epsarr.a = arr.ctypes.data_as(POINTER(c_float))
  epsarr.d[0]=nx
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1df
  pyeps.PyepsCopy1df.argtypes=[POINTER(epsarray1df),c_void_p]
  pyeps.PyepsCopy1df.restype=c_int

  # Copy the numpy array into the eps array
  pyeps.PyepsCopy1df(epsarr,out)
  
  return(out)

def Get1df(pyeps,arr,out):
  ''' Get1df copies a 1D eps array into a numpy array
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 1D eps array
        out     : Output numpy array
        
      Return :
        numpy array
          
  '''

  # Fill in the eps array descriptor with
  # dimensions and data

  nx = Dims1df(arr)
  epsarr = epsarray1df()
  epsarr.a = out.ctypes.data_as(POINTER(c_float))
  epsarr.d[0]=nx
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1df
  pyeps.PyepsCopy1df.argtypes=[c_void_p,POINTER(epsarray1df)]
  pyeps.PyepsCopy1df.restype=c_int

  # Copy eps array into numpy array
  pyeps.PyepsCopy1df(arr,epsarrp)

  return(True)

def Dims1df(arr):
  ''' Dims1df get the length of a 1d float array
  
      Parameters:
        arr           : 1D eps array
        
      Return :
        returns the length
          
  '''

  narr = cast(arr,POINTER(epsarray1df))
  nx = (narr.contents).d[0]
  return(nx)

def Store2df(pyeps,arr):
  ''' Store2df allocates memory and copies 2D numpy arr into memory
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 2D numpy array
        
      Return :
        2D eps array
          
  '''

  # Set the argument and return type of the memory allocator
  pyeps.PyepsCre2df.argtypes=[c_int,c_int]
  pyeps.PyepsCre2df.restype=c_void_p
  nx = arr.shape[0]
  ny = arr.shape[1]

  # Allocate memory for the eps array
  out = pyeps.PyepsCre2df(nx,ny) 
  # Fill in the eps array descriptor with
  # dimensions and data
  epsarr = epsarray2df()
  epsarr.a = arr.ctypes.data_as(POINTER(c_float))
  epsarr.d[0]=nx
  epsarr.d[1]=ny
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy2df
  pyeps.PyepsCopy2df.argtypes=[POINTER(epsarray2df),c_void_p]
  pyeps.PyepsCopy2df.restype=c_int

  # Copy the numpy array into the eps array
  pyeps.PyepsCopy2df(epsarr,out)
  
  return(out)

def Get2df(pyeps,arr,out):
  ''' Get2df copies a 2D eps array into a numpy array
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 2D eps array
        out     : Output numpy array
        
      Return :
        returns numpy array
          
  '''

  # Fill in the eps array descriptor with
  # dimensions and data

  dim=Dims2df(arr)
  epsarr = epsarray2df()
  epsarr.a = out.ctypes.data_as(POINTER(c_float))
  epsarr.d[0]=dim[0]
  epsarr.d[1]=dim[1]
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy2df
  pyeps.PyepsCopy2df.argtypes=[c_void_p,POINTER(epsarray2df)]
  pyeps.PyepsCopy2df.restype=c_int

  # Copy eps array into numpy array
  pyeps.PyepsCopy2df(arr,epsarrp)

  return(out)

def Dims2df(arr):
  ''' Dims2df get the length of a 2d float array
  
      Parameters:
        pyeps         : Shared library containg c-functions
        arr           : 2D eps array
        
      Return :
        returns a tuple with first and second dimension
          
  '''

  narr = cast(arr,POINTER(epsarray2df))
  n1 = (narr.contents).d[0]
  n2 = (narr.contents).d[1]
  return (n1,n2)


def Store1dc(pyeps,arr):
  ''' Store1dc allocates memory and copies 1D char array into memory
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : python string
  '''

  # Set the argument and return type of the memory allocator
  pyeps.PyepsCre1ds.argtypes=[c_int]
  pyeps.PyepsCre1ds.restype=c_void_p
  nx = len(arr)

  # Allocate memory for the eps array
  out = pyeps.PyepsCre1ds(nx) 
  
  # Fill in the eps array descriptor with
  # dimensions and data
  epsarr = epsarrays()
  epsarr.a = c_char_p(arr.encode("utf-8"))
  epsarr.d[0]=nx
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1ds
  pyeps.PyepsCopy1ds.argtypes=[POINTER(epsarrays),c_void_p]
  pyeps.PyepsCopy1ds.restype=c_int

  # Copy the numpy array into the eps array
  pyeps.PyepsCopy1ds(epsarr,out)
  
  return(out)

def Get1dc(pyeps,arr):
  ''' Get1dc copies a 1D eps array into a string
  
      Parameters:
        pyeps   : Shared library containg c-functions
        arr     : 1D eps array
        out     : output string
        
      Return :
        out     : copy of input eps string array
          
  '''

  # Fill in the eps array descriptor with
  # dimensions and data
  
  narr = cast(arr,POINTER(epsarrays))
  ns = (narr.contents).d[0]
  epsarr = epsarrays()
  out=Bytes(ns)
  epsarr.a = c_char_p(bytes(out))
  epsarr.d[0]=ns
  epsarrp = pointer(epsarr)

  # Set the argument types of Copy1ds
  pyeps.PyepsCopy1ds.argtypes=[c_void_p,POINTER(epsarrays)]
  pyeps.PyepsCopy1ds.restype=c_int

  # Copy eps array into string
  pyeps.PyepsCopy1ds(arr,epsarrp)
  bs=epsarrp.contents
  bss=bs.a
  return(bss.decode('utf-8'))

def Dims1dc(str):
  ''' Dims get the length of a string
  
      Parameters:
        str           : 2D eps array
        
      Return :
        returns the length of the string
          
  '''

  nstr = cast(str,POINTER(epsarrays))
  n1 = (nstr.contents).d[0]
  return (n1)


