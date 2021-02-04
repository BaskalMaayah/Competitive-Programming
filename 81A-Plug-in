#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
 
using namespace std;
stack <char> s ;
int main() {
  
string word , rev;
int i ;
cin >> word ;
 
   for ( i=0 ; i< word.size() ; i++)
   {
    if ( !s.empty() && word[i] == s.top())
    s.pop() ;
    
    else
    s.push(word[i]) ;
    
   }
   
   while ( !s.empty())
   {
     {rev += s.top() ;
      s.pop() ;}
   }
   
   for (i=rev.size() - 1 ; i>=0 ; i-- )
   cout << rev[i] ;
 
 
 
    return 0;
}
