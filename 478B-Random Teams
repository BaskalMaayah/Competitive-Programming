#include <bits/stdc++.h>
 
using namespace std ;
 
int main ()
{
    long long n ,m;
    scanf("%lld %lld" , &n , &m);
 
    long long x , x1 , minn = 0 , minn2 , maxx , y , sum , ad;
 
    if ( n % m == 0){
      x = n / m;
      minn = (x-1)*(x) / 2 ;
      minn = minn * m;
    }
    
    else{
      x = (n / m);
      x1 = n % m;
      ad = x + 1;
      sum = m - x1;
      if ( n / m != 1){
        minn = (x-1)*(x) / 2 ;
        minn = minn * sum;
      }
      minn2 = (ad)*(ad - 1) / 2 ;
      minn2 = minn2 * x1;
      
      minn = minn + minn2;
    }
 
    y = n - m ;
    maxx = y * (y+1) / 2 ;
 
    cout << minn << " " << maxx << endl;
 
    
 
}
