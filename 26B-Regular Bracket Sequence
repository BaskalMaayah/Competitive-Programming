#include <iostream>
#include <string>
#include <stack>
 
using namespace std ;
 
int main ()
{
  stack <char> s ;
  stack <char> s1 ;
  string a ;
  cin >> a ;
  
  for (int i=0 ; i <a.size() ; i++)
  {
    s.push(a[i]) ;
  }
  
  int size = s.size() ;
  
  for ( int i=0 ; i <a.size() ; i++)
  {
    if ( s1.empty())
    s1.push(a[i]) ;
    
    else if ( !s1.empty())
    {
       if ( s1.top() == '(' && a[i] == ')')
       s1.pop() ;
       else 
       s1.push(a[i]) ;
    }
  
  }
  
  int size2 = s1.size() ;
  
  cout << size-size2 ;
  
  
  return 0 ;
}
