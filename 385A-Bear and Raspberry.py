from math import *
 
n , c = map(int , input().split() )
 
 
r = [int(i) for i in input().split()]
 
maxx = -1e9
 
for i in range (n-1):
   maxx = max( maxx , r[i]-r[i+1] )
   
if maxx >= c :
  print(maxx-c)
else:
  print(0)
