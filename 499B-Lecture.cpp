#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <istream>
using namespace std ;
int main() 
{
 
int n , t , i ;
string text , te;
vector < pair <string , string >> w ;
cin >> t >> n ;
w.resize(n) ;
 
  for ( int i=0 ; i<n ; i++)
  {
    cin >> w[i].first >> w[i].second ;
    
  }
  cin.ignore();
  getline (cin , text) ;
  
  stringstream mytext(text) ;
   
    while ( t-- )
    {
          mytext >> te ;
          
          for ( int i=0 ; i<n ; i++)
          {
               if ( te == w[i].first || te == w[i].second)
               {  
                 if (w[i].second.size() < w[i].first.size() )
                     cout << w[i].second << " " ;
                     else 
                      cout <<  w[i].first << " " ;
                }
          }
    }
  
  
  return 0 ;
}
