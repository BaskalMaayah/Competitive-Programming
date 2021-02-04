
n , k = map ( int , input().split())
cnt = 0;
 
x= []
x = [int(i) for i in input().split()]
 
for i in range (n):
     if  x[i] + k <= 5 :
       cnt += 1
  
  
print(cnt//3)
