n = int(input())
v1 = 0
v2 = 0
v3 = 0
i = 0
 
for i in range (n):
      x , y , z = map(int, input().split())
      v1 = v1 + x;
      v2 = v2 + y;
      v3 = v3 + z;
  
 
if  v1 == 0 and v2 == 0 and v3 == 0 :
     print("YES")
else :
     print("NO")
