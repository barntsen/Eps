/*
\documentclass{article}
\begin{document}
%
%         * * * * * * * * * * * * * * * * * * * * * * * * 
%         *                                             *
           \title{nG -- a tiny graphics library}
		     
%         *                                             *
%         * * * * * * * * * * * * * * * * * * * * * * * *
%
\author{B\o rge Arntsen}
\maketitle
\tableofcontents
%===============================================================================
\section{Introduction}    
%===============================================================================
nG is a minimal subroutine library with functions for simple two
dimensional vector and bitmap graphics. The library is device
independent. Drivers for 
PostScript devices and the X11 window system are available.  

nG provides a virtual drawing device consisting of a square of size
one in the horizontal and vertical directions. Figure \ref{fig:1}
illustrates this. A point on the device is described by the
coordinate pair $(x, y)$ where $x$ is the horisontal distance from
the origin and $y$ is the vertical distance from the origin.  The
origin is always located in the lower lefthand corner, while the
point $(1,1)$ is located in the upper right hand corner.
%
\begin{figure}
    \begin{picture}(120,120)(-20,-20)
        \put(0,0){\vector(1,0){100}}
        \put(100,0){\line(0,1){100}}
        \put(100,100){\line(-1,0){100}}
        \put(0,0){\vector(0,1){100}}
        \put(-15,100){$y$}
        \put(100,-15){$x$}
        \put(0,-15){$0,0$}
        \put(100,115){$1,1$}
   \end{picture}
   \caption{nG coordinate system}
   \label{fig:1}
\end{figure}
%
The following routines are provided
\begin{itemize}
    \item {\tt NgOpen}      -- Open a device
    \item {\tt NgClose}     -- Close a device
    \item {\tt NgGetdev}    -- Return the device handler
    \item {\tt NgEvent}     -- Get a keyboard or mouse event
    \item {\tt NgVport}     -- Set a viewport
    \item {\tt NgRotate}    -- Set a rotation angle
    \item {\tt NgLine}      -- Draw a line 
    \item {\tt NgSetlinew}  -- Set the width of a line
    \item {\tt NgGetlinew}  -- Get the width of a line
    \item {\tt NgSetlinet}  -- Set line type
    \item {\tt NgMove}      -- Move to a point
    \item {\tt NgImage}     -- Display a gray scale image
    \item {\tt NgFont}      -- Load a font
    \item {\tt NgSetfonts}  -- Set font size
    \item {\tt NgGetfonts}  -- Get font size
    \item {\tt NgString} -- Display a string
    \item {\tt NgGetcharn} -- Get the number of characters in a font
    \item {\tt NgGetstringl} -- Get string length
    \item {\tt NgGetstringh} -- Get string height
    \item {\tt NgChar} -- Display a single character
    \item {\tt NgGetcharh} -- Get character heigth
    \item {\tt NgGetcharw} -- Get character width
    \item {\tt NgGetkbdc} -- Get keyboard code
    \item {\tt NgGetmousex} -- Get mouse x-coordinate
    \item {\tt NgGetmousey} -- Get mouse y-coordinate
    \item {\tt NgGetmouseb} -- Get mouse button press
    \item {\tt NgSetcmod}   -- Set the color model
    \item {\tt NgSetcmap}   -- Set the color map
    \item {\tt NgGetcmap} -- Get the color map 
    \item {\tt NgSetcolor} -- Get the color map 
    \item {\tt NgGetncol} -- Get no of colors
    \item {\tt NgSetncol} -- Set no of colors
    \item {\tt NgNewpath} -- Create a new path
    \item {\tt NgPath} -- Add a path
    \item {\tt NgFill} -- Fill paths
\end{itemize}
%===============================================================================
\section{nG data structures}
%========================================================================
This section contains the data structures used by most routines in the nG 
library. To begin with a few handy definitions are introduced:
%
\subsection*{Constants}
%
\begin{verbatim}
*/
const NODEV = 10;       /* No device                */
const PS    = 11;       /* Postscript driver        */
const X11   = 12;       /* X11 driver               */
const KEY   = 100;      /* Keyboard event flag      */
const MOUSE = 101;      /* Mouse    event flag      */
const RESIZE = 102;     /* Resize   event flag      */
const B1    = 1;        /* Mouse  button 1 press    */
const B2    = 2;        /* Mouse  button 2 press    */
const B3    = 3;        /* Mouse  button 3 press    */
const BR1   = 4;        /* Mouse  button 1 release  */
const BR2   = 5;        /* Mouse  button 2 release  */
const BR3   = 6;        /* Mouse  button 3 release  */
const NCOLOR=  256;     /* Default number of colors */    
const LSOLID=20;        /* Solid line               */
const LDASH=21;         /* Dashed line              */
const DEVRGB=300;       /* RGB color model          */
const DEVGRAY=301;      /* GRAY SCALE color model   */
const DEVCMYK=302;      /* CMYK color model   */
/*
\end{verbatim}
The device structure contains key information about
the device beeing used and all of the state information
for the the graphics operations.
\begin{verbatim}
*/
struct device {
           int devcode;   /* one of NODEV, PS                       */
           int opcode;    /* see the list above                     */
           float x,y;     /* point to move or draw to               */
           float x0,y0;   /* point to move or draw from             */
           float xc, yc;  /* Current point within viewport          */
           float vx, vy;  /* Viewport origin                        */
           float lvx, lvy;/* Length of viewport                     */
           float R11, R12;/* Rotation matrix top row                */
           float R21, R22;/* Rotation matrix bottom row             */
           float theta;   /* Rotation angle                         */
           int nx, ny;    /* size of matrix parr                    */
           float [*,*] parr;/* array used by IMAGE operation        */
           int   s;        /* character to draw                      */
           float lx;      /* width of image                         */
           float ly;      /* height of image                        */
           float lw;      /* width of lines                         */
           int  lt;       /* line type                              */
           float ld;      /* length of line dashes                  */
           char [*] font; /* Font name                              */
           int nchars;    /* number of characters in the font       */
           float xmin;    /* minimum font x-coordinate              */
           float xmax;    /* maximum font x-coordinate              */
           float ymin;    /* minimum font y-coordinate              */
           float ymax;    /* maximum font y-coordinate              */
           float txtscale; /* text scale factor                     */
           float flw;      /* Line width to draw fonts at           */  
           int   evflag;   /* event flag (KEY or MOUSE)             */
           int   kbdc;     /* keyboard code                         */
           float mx,my;    /* mouse coordinates                     */
           int button;     /* mouse button                          */
           int ncol;       /* the number of RGB (color) values      */
           int cmod;       /* Color model                           */
	   float [*] red;  /* the red RGB values                    */
	   float [*] green;/* the green RGB values                  */
	   float [*] blue; /* the blue RGB values                   */
	   int dcolor;     /* the drawing color index               */
           float [*] xp;   /* x-coordinates of a polyline           */ 
           float [*] yp;   /* y-coordinates of a polyline           */ 
           float [*] xpath;  /* x-coordinates of a path             */ 
           float [*] ypath;  /* y-coordinates of a path             */ 
           float     devres; /* Device resolution                   */
           float     devlx;  /* Device width (inches)               */
           float     devly;  /* Device height (inches)               */
           }
/*
\end{verbatim}
%==============================================================================
\section{nG function calls}
%==============================================================================
%------------------------------------------------------------------------------
\subsection{NgOpen}
%------------------------------------------------------------------------------
{\tt name} is a character string indicating the device type to open. At
the moment the only valid devices are a PostScript device with the name 
{\tt "ps"}. The return value is
a reference to a device descriptor.  In case of failure {\tt NgOpen }
returns a NULL reference
%
\begin{verbatim}
*/
struct device NgOpen(char [*] name){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgClose}
%------------------------------------------------------------------------------
% 
{\tt NgClose} closes a device.  {\tt dd} is a device descriptor
returned from {\tt NgOpen}.  The return value is {\tt OK} on normal
return and {\tt ERR} in case of failure.
%
\begin{verbatim}
*/
int NgClose(struct device dd){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgGetdev}
%------------------------------------------------------------------------------
% 
{\tt NgGetdev} returns the last opened device.
%
\begin{verbatim}
*/
struct device NgGetdev(){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgGetres}
%------------------------------------------------------------------------------
% 
{\tt NgGetdev} returns the resolution of the device.
%
\begin{verbatim}
*/
float NgGetres(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetlx}
%------------------------------------------------------------------------------
% 
{\tt NgGetdev} returns the horizontal size of the device (in inches).
%
\begin{verbatim}
*/
float NgGetlx(struct device dd){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgGetly}
%------------------------------------------------------------------------------
% 
{\tt NgGetdev} returns the horizontal size of the device (in inches).
%
\begin{verbatim}
*/
float NgGetly(struct device dd){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgEvent}
%------------------------------------------------------------------------------
% 
{\tt NgEvent} waits for a keyboard or mouse event.  
{\tt dd} is a device descriptor
returned from {\tt NgOpen}.  The return value is {\tt MOUSE} or
{\tt KEY} corresponding to a mouse or keyboard event. 
In case of failure {\tt ERR} is returned.
This call only works for the X11 device. For the ps device
the return value is {\tt ERR}.
%
\begin{verbatim}
*/
int NgEvent(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgVport}
%------------------------------------------------------------------------------
% 
{\tt NgVport} sets a viewport.  {\tt dd} is a device descriptor
returned from {\tt NgOpen}. {\tt x,y} is the coordinates of the lower
left hand corner of the viewport. {\tt lx} and {\tt ly} is the length
and height of the viewport. After a viewport has been set, all
coordinates are mapped inside the rectangle defined by the
viewport. The following transfomation are performed
%
\begin{eqnarray}
    x' = vx + x lx, \nonumber\\
    y' = vy + y ly, 
\end{eqnarray} 
%
mapping a point $x,y$ to the point $x',y'$.
The return value is {\tt OK} on normal
return and {\tt ERR} in case of failure.
%
\begin{verbatim}
*/
int NgVport(struct device dd, float vx, float vy, float lx, float  ly){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgRotate}
%------------------------------------------------------------------------------
% 
{\tt NgRotate} sets a rotation angle. {\tt dd} is a device descriptor
returned from {\tt NgOpen}. {\tt theta} is the rotation angle in radians.
The following operation is performed
%
\begin{eqnarray}
    x' = x\cos(\theta) - y\sin(\theta) , \nonumber\\
    y' = x\sin(\theta) + y\cos(\theta).
\end{eqnarray} 
%
mapping a point $x,y$ to the point $x',y'$.
Here $\theta$ is the rotation angle.
The return value is {\tt OK} on normal
return and {\tt ERR} in case of failure.
%
\begin{verbatim}
*/
int NgRotate(struct device dd, float theta){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgLine -- Draw a line}
%------------------------------------------------------------------------------
%
{\tt NgLine} draws a line to the point x, y.  {\tt dd} is a device
descriptor returned from {\tt NgOpen}.  The return value is {\tt OK}
on normal return and {\tt ERR} in case of failure.
%
\begin{verbatim}
*/
int NgLine(struct device dd, float x, float y){}
/*
\end{verbatim}
%
%
%------------------------------------------------------------------------------
\subsection{NgSetlinew -- set the width of lines}
%------------------------------------------------------------------------------
%
{\tt NgSetlinew} sets the width of lines to lwidth.  {\tt dd} is a
device descriptor returned from {\tt NgOpen}.  The return value is
{\tt OK} on normal return and {\tt ERR} in case of failure.
%
\begin{verbatim}
*/
int NgSetlinew(struct device dd, float lwidth){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgSetlinet -- set the type of line}
%------------------------------------------------------------------------------
%
{\tt NgSetlinew} sets the linetype to ltype, which is either {\tt LSOLID} or {\tt LDASH}.  {\tt dd} is a
device descriptor returned from {\tt NgOpen}.  {\tt ld} is the length of 
each dash.The return value is
{\tt OK} on normal return and {\tt ERR} in case of failure.
%
\begin{verbatim}
*/
int NgSetlinet(struct device dd, int ltype, float ld){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgGetlinew -- Get the width of lines}
%------------------------------------------------------------------------------
%
{\tt NgGetlinew} returns the current linewidth.  {\tt dd} is a
device descriptor returned from {\tt NgOpen}.  
%
\begin{verbatim}
*/
float NgGetlinew(struct device dd){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgMove -- Move to a point}
%------------------------------------------------------------------------------
%
{\tt NgMove} moves to the point {\tt x}, {\tt y}.  {\tt dd} is a
device descriptor returned from {\tt NgOpen}.  The return value is
{\tt OK} on normal return and {\tt ERR} in case of failure.
%
\begin{verbatim}
*/
int NgMove(struct device dd, float x, float y){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgImage -- Display a color image}
%------------------------------------------------------------------------------
{\tt NgImage} display a rectangular image with the lower left corner
at the current position.  {\tt dd} is a device descriptor returned
from {\tt NgOpen}.  The array {\tt arr} is a floating point array
containing positive values between 0 and 1. {\tt nx} and {\tt ny} is
the dimensions of the array, while {\tt width} and {\tt height} is the
width and height of the image. 
The return value is
{\tt OK} on normal return and {\tt ERR} in case of failure.
%
\begin{verbatim}
*/
int NgImage(struct device dd, float [*,*] arr, float width, float height ){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgFont -- Select a font}
%------------------------------------------------------------------------------
%
{\tt NgFont} loads a font from the font library. 
{\tt dd} is a device descriptor returned from {\tt NgOpen}.  {\tt s}
is a character array containing the font name.  The return value is {\tt
OK} on normal return and {\tt ERR} in case of failure.
The font names in the table below are legal.
%

\begin{tabular}{|c|c|c|c|c|}\hline
gothger&  italicc &  marker  &  romand &   symbol\\
gothita&  italiccs&  meteo   &  romans &   uppmat \\ \hline
\end{tabular}
%
%
\begin{verbatim}
*/
int NgFont(struct device dd, char [*] s){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgSetfonts --Set font size}
%------------------------------------------------------------------------------
%
{\tt NgStSetfonts} sets the the size of the current font to {\tt lw}.  
if {\tt lw} is set equal to 1, a single character will fit
inside the current window.
The size of the characters in the font are by default set
such that 20 characters fit accross the current window, which
implies that {\tt lw} is equal to $1/20$.
{\tt dd} is
a device descriptor returned from {\tt NgOpen}.  The return value is
{\tt OK} on normal return and {\tt ERR} in case of failure.
%
\begin{verbatim}
*/
int NgSetfonts(struct device dd, float fs){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetfonts --Get font size}
%------------------------------------------------------------------------------
%
{\tt NgStGetfonts} returns the current font size.
The size of the characters in the font are by default set
such that 20 characters fit accross the current window, which
implies that {\tt fs} is equal to $1/20$.
{\tt dd} is
a device descriptor returned from {\tt NgOpen}.  
%
\begin{verbatim}
*/
 float NgGetfonts(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgString -- Display a string}
%------------------------------------------------------------------------------
%
{\tt NgString} display a string starting at the current position.
The string is guaranteed to fit inside a box with length given 
by the return value of {\tt NgGetstrinl}(see below) and 
height given by {\tt NgGetstringh}. The box is positioned
with the lower left corner at the current position.
The current position after return from {\tt NgString} is
at the lower right hand corner of the box.
{\tt dd} is a device descriptor returned from {\tt NgOpen}.  {\tt s}
is a character array containing the string.  The return value is {\tt
OK} on normal return and {\tt ERR} in case of failure.
%
\begin{verbatim}
*/
int NgString(struct device dd, char [*] s){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetstringl -- Get the string length}
%------------------------------------------------------------------------------
{\tt NgGetstringl} returns the length of the string {\tt s}.  {\tt dd} is
a device descriptor returned from {\tt NgOpen}.  The return value is
larger or equal to zero on normal return and negative in case of failure.
%
\begin{verbatim}
*/

float NgGetstringl(struct device dd, char [*] s){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetstringh -- Get the string height}
%------------------------------------------------------------------------------
%
{\tt NgGetstringh} returns the height of the string {\tt s}.  {\tt dd} is
a device descriptor returned from {\tt NgOpen}.  The return value is
larger or equal to zero on normal return and negative in case of failure.
%
\begin{verbatim}
*/
float NgGetstringh(struct device dd, char [*] s){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetkeybdc -- Get keyborad code}
%------------------------------------------------------------------------------
%
{\tt NgGetkeybdc} returns the latest keyboard code.
{\tt dd} is a device descriptor returned from {\tt NgOpen}. 
{\tt NgEvent} must be called before {NgGetkeybdc} is called.
%
\begin{verbatim}
*/
int NgGetkeybdc(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetmousex -- Get the mouse x-coordinat}
%------------------------------------------------------------------------------
%
{\tt NgGetmousex} returns the x-coordinat of the current mouse position.  
{\tt dd} is a device descriptor returned from {\tt NgOpen}. 
{\tt NgEvent} must be called before {NgGetmousex} is called.
%
\begin{verbatim}
*/
float NgGetmousex(struct device dd){}
/*
\end{verbatim}
%
%------------------------------------------------------------------------------
\subsection{NgGetmousey -- Get the mouse y-coordinat}
%------------------------------------------------------------------------------
%
{\tt NgGetmousey} returns the y-coordinat of the current mouse position.  
{\tt dd} is a device descriptor returned from {\tt NgOpen}. 
{\tt NgEvent} must be called before {NgGetmousey} is called.
%
\begin{verbatim}
*/
float NgGetmousey(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgFpath -- Get the path to the font directory}
%------------------------------------------------------------------------------
%
{\tt NgFpath} returns a string containing the path to the
font directory.
{\tt dd} is a device descriptor returned from {\tt NgOpen}. 
%
\begin{verbatim}
*/
char [*] NgFpath(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetmouseb -- Get the last mouse button}
%------------------------------------------------------------------------------
%
{\tt NgGetmouseb} returns an integer indicating the last
pressed mousebutton. The return values are {\tt B1}, {\tt B2} and
{\tt B3} corresponding to button 1, 2 and 3.
%
\begin{verbatim}
*/
int NgGetmouseb(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgSetcmap, NgGetcmap -- Read and write the color map}
%------------------------------------------------------------------------------
{\tt NgSetcmap} changes the colormap according to the RGB-values
held by the three float arrays {\tt red}, {\tt green} and {\tt blue}.
\tt{NgGetcmap} reads the current colormap and returns
the three float arrays {\tt red}, {\tt green} and {\tt blue} with the
corresponding RGB-values.
The size of the red, green and blue arrays determines the number of colors
used. 
%
\begin{verbatim}
*/
int NgSetcmap(struct device dd, float [*] red, float [*] green, float [*] blue){}
int NgGetcmap(struct device dd, float [*] red, float [*] green, float [*] blue){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgSetcmod -- Set color model}
%------------------------------------------------------------------------------
{\tt NgSetcmod} changes the colormodel. If cmod=DEVRGB colors are interpreted
according to the RGB model. If cmod=DEVGRAY colors are interpreted according
to the gray scale model. Colormaps are still defined by three values, they must
however be equal.
%
\begin{verbatim}
*/
int NgSetcmod(struct device dd, int cmod){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgSetcolor -- Set the drawing color}
%------------------------------------------------------------------------------
\tt{NgSetcolor} changes the drawing color according to the integer
value held by the {\tt color} variable. The colors are interpreted
according to the current colormap.
%
\begin{verbatim}
*/
int NgSetcolor(struct device dd, int color){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgSetncol -- Set the no of colors}
%------------------------------------------------------------------------------
\tt{NgSetncol} sets the number of colors used.
%
\begin{verbatim}
*/
int NgSetncol(struct device dd,int ncol){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetncol -- Get the no of colors}
%------------------------------------------------------------------------------
\tt{NgGetncol} returns the number of colors used.
%
\begin{verbatim}
*/
int NgGetncol(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetcharn -- Get the number of characters in a font}
%------------------------------------------------------------------------------
\tt{NgGetcharn} returns the number of characters in the currently
loaded font.
%
\begin{verbatim}
*/
int NgGetcharn(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgNewpath -- Create a path}
%------------------------------------------------------------------------------
\tt{NgNewpath} creates a new path.
loaded font.
%
\begin{verbatim}
*/
int NgNewpath(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgPath -- Draw a path}
%------------------------------------------------------------------------------
\tt{NgPath} will generate a closed path.
%
\begin{verbatim}
*/
int NgPath(struct device dd, float [*] x, float [*] y){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgFill -- Fill a path}
%------------------------------------------------------------------------------
\tt{NgFill} will fill the current path using the current color.
%
\begin{verbatim}
*/
int NgFill(struct device dd){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgChar -- Draw a character}
%------------------------------------------------------------------------------
\tt{NgChar} draws the character s.
loaded font.
%
\begin{verbatim}
*/
int NgChar(struct device dd, int s){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetcharw -- Get charater width}
%------------------------------------------------------------------------------
\tt{NgGetcharw} returns the width of the characters bounding box.
loaded font.
%
\begin{verbatim}
*/
float NgGetcharw(struct device dd, int s){}
/*
\end{verbatim}
%------------------------------------------------------------------------------
\subsection{NgGetcharh -- Get charater height}
%------------------------------------------------------------------------------
\tt{NgGetcharh} returns the height of the characters bounding box.
loaded font.
%
\begin{verbatim}
*/
float NgGetcharh(struct device dd, int s){}
/*
\end{verbatim}
\end{document}
*/
