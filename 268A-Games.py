n = int(input())
i = 0
home = []
guest = []
 
i = 0
k = 0
 
for i in range (n):
     x , y = map(int, input().split())
     home.append(x)
     guest.append(y)
 
   
 
cnt = 0
 
for i in range (n):
  for k in range (n):
     if  home[i] == guest[k] :
        cnt = cnt + 1
       
       
  
 
print(cnt)
