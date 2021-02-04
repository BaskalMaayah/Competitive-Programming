#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
map <char,int> mp;
string s;
bool order = true;
cin >> s;
char c = s[0];
 
for ( int i=0 ; i < s.size() ; ++i){
  if (s[i] < c){
    order = false;
    break;
  }
  mp[s[i]] = mp[s[i]] + 1;
  c = s[i];
}
 
if ( order == true && (mp['c'] == mp['a'] ||  mp['c'] == mp['b']) &&  mp['a'] != 0 &&  mp['b'] != 0 &&  mp['c'] != 0 )
cout << "YES";
else
cout << "NO";
}
