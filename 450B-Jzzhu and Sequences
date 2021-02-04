#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
  long long int num , x , y , a[6];
  scanf("%lld %lld %lld" , &x ,&y ,&num);
  a[1] = x;
  a[2] = y;
 
  for ( int i = 3 ; i <= 6 ; ++i)
      a[abs(i)%6] = a[abs(i-1)%6] - a[abs(i-2)%6];
 
        if(a[(num % 6)] >= 0) 
           printf("%I64d", a[(num % 6) ]%1000000007);
        else
           printf("%I64d", (1000000007+a[(num % 6)] % 1000000007) % 1000000007);
 
 
    return 0;
}
    
