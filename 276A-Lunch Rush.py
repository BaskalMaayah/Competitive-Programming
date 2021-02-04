
from math import *
 
maxx = -1e9
n , k = map ( int , input().split() )
 
for i in range (n) :
   f , t = map ( int , input().split() )
   if t > k :
     joy = f - t + k
   else :
     joy = f
 
   maxx = max ( maxx , joy)
 
  
print(maxx)
