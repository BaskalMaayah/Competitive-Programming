#include <iostream>
using namespace std ;
int minn ( int a ,int b , int c , int d ) ;

int main ()
{
  int r1 , r2 , r3 ;
  cin >> r1 >> r2 >> r3 ;
  int d1 = r1*2 + r2*2 ;
  int d2 = r1 + r2 + r3 ;
  int d3 = r1*2 + r3*2 ;
  int d4 = r2*2 + r3*2 ;
  
  cout << minn ( d1 , d2 , d3 , d4) ;
  
}

int minn ( int a ,int b , int c , int d) 
{
  
 int m = a ;
 if ( b < m) m=b ;
 if ( c < m) m=c ;
 if ( d < m) m=d ;
 
 return m ;
 
}
  
