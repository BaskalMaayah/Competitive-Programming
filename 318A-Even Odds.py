n , m = map( int , input().split())
 
half = n/2
 
if  n%2 == 0 :
 
  half = int (n/2)
  if  m <= half :
      print( int(2*m-1) )
  else:
      print ( int (2*(m - half) ) )
 
else:
    half = int (n/2+1)
    if  m <= half :
      print( 2*m-1 )
    else:
      print ( 2*(m - half) )
     
 
