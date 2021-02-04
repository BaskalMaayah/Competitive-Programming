#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
 
  long long n , k , res;
  scanf("%lld %lld" , &n ,&k);
 
  if ( k <= n){

      if ( k%2 == 0) 
        res = (k-1) / 2;
      else if ( k%2 == 1)
        res = k/2;    
    }
  
 
  else if ( k > n){
    if (k-n <= n)
      res = (n - ( k-n) + 1) / 2;
    else if ( k-n > n)
      res = 0;
  }
 
  else if ( n == k)
    res = (n-1)/2;
       
 
 
   cout << res << endl;
 
   return 0;
}
    
