import libe

char [*] ScanPath() :

  # Return the system library path
  # The path is obtained
  # by concatenating the value of the environment variable 
  # EPS with the string "/Lib/".

  char [*] env   # Value of EPS  
  char [*] tmp   # Temporary string  
  char [*] path  # The reurn path    
  int      l1    # Length of env     
  int      l2    # Length of tmp     

  env = LibeGetenv("EPS") 
  tmp = "/Lib/" 
  l1 = len(env,0) 
  l2 = len(tmp,0) 
  path=new(char[l1+l2+100]) 
  LibeStrcpy(env,path) 
  LibeStrcat(tmp,path) 

  return(path) 
   
