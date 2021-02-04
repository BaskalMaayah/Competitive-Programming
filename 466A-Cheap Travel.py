from math import *
 
n,m,a,b = map(int, input().split())
 
print ( min (n//m*b + n%m*a , n*a , (n//m)*b + b))
