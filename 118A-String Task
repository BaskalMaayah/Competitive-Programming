#include <bits/stdc++.h>
 
using namespace std ;
stack <char> ans;
vector <char> last;
int main ()
{
  string s;
  cin >> s;
    for ( int i = 0 ; i < s.size() ; ++i)
  {
    ans.push(s[i]);
    if ( ans.top() == 'A' || ans.top() == 'O' || ans.top() == 'U' || ans.top() == 'I' || ans.top() == 'E' || ans.top() == 'Y' || ans.top() == 'a' || ans.top() == 'o' || ans.top()== 'u' || ans.top() == 'i' || ans.top() == 'e' || s[i] == 'y' )
     {
       ans.pop();
       continue;
     }
     
     else if ( ans.top() >= 65 && ans.top() <= 90)
    {
      ans.top() = char(s[i] + 32); 

    }
  } 
    
 
  while ( !ans.empty())
  {

     last.push_back(ans.top());
     ans.pop();
  }
 
  for ( int i = last.size() - 1 ; i >= 0 ; --i)
  {
    if ( last[i] != 'A' && last[i] != 'O' && last[i] != 'U' && last[i] != 'I' && last[i] != 'E' && last[i] != 'Y' &&
     last[i] != 'a' && last[i] != 'o' && last[i] != 'u' && last[i] != 'i' && last[i] != 'e' && last[i] != 'y')
    printf("%c" , '.');
    printf("%c" , last[i]);
  }
 
   return 0;
}
