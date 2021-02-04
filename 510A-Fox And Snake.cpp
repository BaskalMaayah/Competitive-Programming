#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  int n , m , i , t , l ;
  bool last = false ;
  cin >> n >> m ;
 for ( i=1 ; i<=n ; i++)
 {
   if ( i%2 == 0)
     last = !last ;
     
   for ( l=1 ; l<=m ; l++)
   {
     if ( i%2 == 1)
     cout << "#" ;
     else
     {
     if ( l==m && last || l==1 && !last)
     cout << "#" ;
     else if (l==1 && last || l==m && !last)
     cout << "." ;
     else 
     cout << "." ;
     }
    } 
     
   
   cout << endl ;
   
 }  
   
 return 0 ;
} 
  
  
