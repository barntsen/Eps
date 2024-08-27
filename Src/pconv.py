
f = open("scanpathaa.e", "r")
text = f.read()

instring = False
for i in range(0,len(text)) :

  c=text[i]

  # Check if start/end of string
  if(c == '"') :
    if(instring == True) :
      instring = False
    else :
      instring = True

  if (c == '\n'):
    out='\n'
  else : 
    out = c

  if(instring == False):
    if (c == '{') :     
      out = ':'
    if (c == '}') :
      out = 'end'
  else :
    if (c == '{') :     
      out = '{'
    if (c == '}') :
      out = '}'

  print(out,end='')

 
    
    




# Output all lines
#for line in lines :
#  print(line, end="")

