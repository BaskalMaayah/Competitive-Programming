#include <bits/stdc++.h>
 
using namespace std ;
 
 
  long long GCD( long long x , long long y){
    if ( y == 0)   return x;
    return GCD( y , x%y);
  }
 
  int main ()
{
 
  long long a , b , c , d , w , h , gcd ;
  double A , B , C , D ;
  cin >> a >> b >> c >> d;
  A = a;
  B = b;
  C= c;
  D = d;   
 
  if ( abs(A/B - C/D) <= 1e-9 ){
         cout << 0 << "/" << 1 << endl;
         exit(0);
  }
  
   else if ( A/B > C/D){
    h = a * d;
    w = a * d - b * c;
    
    gcd = GCD (w,h);
    //cout << 123 << endl;
    cout << w / gcd << "/" << h / gcd ;
  }
 
  else{
    h = b * c - a * d ;
    w = c*b;
    gcd = GCD (h,w);
    //cout << 321 << endl;
    cout << h / gcd << "/" << w / gcd ;
  }
      
  
 
 
    return 0;
}
