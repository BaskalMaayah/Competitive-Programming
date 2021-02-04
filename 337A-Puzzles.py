a = []
 
n , m = map(int, input().split())
 
a = [int(i) for i in input().split()]
a.sort()
 
minn = 1e9
 
 
for i in range (m - n +1) :
    if  a[i+n-1] - a[i] < minn :
      minn = a[i+n-1] - a[i];
 
 
print(minn)
