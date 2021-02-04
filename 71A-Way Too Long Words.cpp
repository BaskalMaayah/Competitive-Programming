#include <iostream>
#include<string>
using namespace std ;
int main()
{
 int n , i , t , l ;
 char first , last ;
 string s ;
 cin >> t;
 for (i=1 ; i<=t ; i++)
 {
   cin >> s ;
   if (s.size() <= 10)
   cout << s << endl ;
   else 
   {
     cout <<s[0]<<s.size()-2<<s[s.size()-1] << endl ;
 
     
   }
  
 }
 return 0 ;
 } 
