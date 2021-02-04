
from math import *
 
n = int(input())
a = []
maxx = -1 
minn = 1000
 
a = [int(i) for i in input().split()]
 
for i in range (0 , n):
  if a[i] > maxx :
    maxx = a[i];
    f = i;
  if a[i] <= minn :
    minn = a[i];
    s = i; 
 
 
sec = (n - 1 - s) + (f);
if  s < f :
 sec = sec - 1
 
print(sec)
