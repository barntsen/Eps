# Rec object

# Imports
import libe
import model

class rec :
  int nr; # No of receivers
  int [*] rx;    # Receiver x-postions
  int [*] ry;    # Receiver y-postions 
  int fd;        # Snapshot output file descriptor
  int nt;        # No of time samples
  float [*,*] p;   # Pressure p[i,j] at time sample no j at position no i
  float [*,*] sxx; # Stress sxx[i,j] at time sample no j at position no i
  float [*,*] syy; # Stress syy[i,j] at time sample no j at position no i
  float [*,*] vx;  # Velocity vx[i,j]  at time sample no j at position no i
  float [*,*] vy;  # Velocity vy[i,j]  at time sample no j at position no i
  float [*,*] wrk; # Work array
  int   resamp;  # Resample factor for receivers
  int pit;       # Next time sample to be recorded


def struct rec RecNew(int [*] rx, int [*] ry, int nt, int resamp) :                
                  

  # RecNew is the constructor for receiver objects.
  #
  # Arguments:
  #   rx:     Integer array with position of receivers in the 
  #           x-direction (gridpoints)
  #   ry:     Integer array with position of receivers in the 
  #           y-direction (gridpoints)
  #   nt:     No of time samples in the receiver data
  #   resamp: Resample factor relative to the modelling time sample interval
  #
  #  Returns: Receiver object  

  struct rec Rec;

  Rec = new(struct rec);
  Rec.nr = len(rx,0);
  Rec.rx = rx;
  Rec.ry = ry;
  Rec.nt = nt;
  Rec.p = new(float [Rec.nr,Rec.nt]);
  Rec.vx = new(float [Rec.nr,Rec.nt]);
  Rec.vy = new(float [Rec.nr,Rec.nt]);
  Rec.resamp = resamp;
  Rec.pit = 0;
  
  return(Rec);
  

def int RecReceiver(struct rec Rec,int it, float [*,*]p, float [*,*] vx, \
                                       float [*,*] vy) :
                                       
  # RecReciver records data at the receiver
  #
  # Arguments: 
  #  Rec:    : Receiver object
  #  it      : Current time step
  #  sxx     : Stress field xx-component
  #  syy     : Stress field yy-component
  #  vx      : Particle velocity x-component
  #  vy      : Particle velocity y-component
  #
  # Returns  : Integer (OK or ERR)
  
  int pos;
  int ixr,iyr;

  if(Rec.pit > Rec.nt-1):
    return(ERR);

  if(LibeMod(it,Rec.resamp) == 0):
    for (pos=0;pos<Rec.nr; pos=pos+1):  
      ixr=Rec.rx[pos];
      iyr=Rec.ry[pos];
      Rec.p[pos,Rec.pit] =  p[ixr,iyr];
      Rec.vx[pos,Rec.pit] = vx[ixr,iyr];
      Rec.vy[pos,Rec.pit] = vy[ixr,iyr];
     
    Rec.pit = Rec.pit+1;
  
  return(OK);


def float [*,*] RecGetrec(struct rec Rec, int data):

  # RecGetrec retrieves the recorded data
  #
  # Arguments: 
  #  Rec:    : Receiver object
  #  data    : =0 for  p
  #  data    : =2 for vx velocity particle velocity x-comp.
  #  data    : =3 for vy velocity particle velocity y-comp.
  #
  # Returns  : 2D data array
 
  if(data == 0):
    return(Rec.p);
  
  else if(data == 1):
    return(Rec.vx);
  
  else if(data == 2):
    return(Rec.vy);
  
