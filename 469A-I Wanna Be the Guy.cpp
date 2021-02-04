#include <iostream>
#include <string>
#include <set>
#include <numeric>
 
using namespace std;
int main () 
{
  int n , a , b ;
  cin >>  n ;
  set <int> num ;
  
  int l , m ;
  cin >> l ;
  for ( int i=0 ; i<l ; i++)
  {
    cin >> a ;
   num.insert(a) ;
  }
  
  cin >> m ;
  for ( int i=0 ; i<m ; i++)
  {
    cin >> b ;
    num.insert(b) ;
  }
  
    int sum = accumulate(num.begin(), num.end(), 0);
   
   int fact=0 ;
   for ( int i=1 ; i<=n ; i++)
   {
    fact += i ;
   }
   
   if ( sum == fact)
   cout << "I become the guy." ;
   else
   cout <<"Oh, my keyboard!" ;
   
   return 0 ;
   
 
}
