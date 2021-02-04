#include <iostream>
#include<cmath>
using namespace std ;
int main() 
{
 
  int c1 , c2 , c3 , m1 , m2 , m3 ,mym , myc , n;
  
  cin >> c1 >> c2 >> c3 ;
  cin >> m1 >> m2 >> m3 ;
   double c = c1+c2+c3 ;
  double m = m1+m2+m3 ;
  cin >> n ;
 
 myc = ceil (c/5) ;
 mym = ceil (m/10) ;
 
 if ( n >= myc && n >= mym  )
 {
   if ( myc >= mym && n-myc >= mym )
   cout << "YES " ;
   else if ( mym >= myc && n-mym >= myc )
   cout << "YES " ;
   else 
   cout << "NO" ;
 }
 else 
 cout << "NO" ;
 
 return 0 ;
}
 
