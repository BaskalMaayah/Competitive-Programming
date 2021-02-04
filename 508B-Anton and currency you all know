#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
 
 string s;
 int change , best = 0 , temp , idx = -1;
 cin >> s;
 char x = s[s.size()-1];
 change = s[s.size()-1] - '0';
 bool even_found = false , even2 = false;
 
 for ( int i = 0 ; i < s.size()-1 ; ++i){
   temp = s[i]-'0';
   if ( change >= temp && temp % 2 == 0 ){
        best = i;
        even_found = true;
   }
   if ( even_found )  break;
 
   if ( temp%2 == 0 && i > idx){
     idx = i;
     even2 = true;
   }
 }
 
 
 if ( !even_found && !even2) {
    cout << -1 << endl;
    exit(0);
  }
 
  else if (even_found){
    s[s.size()-1] = s[best];
    s[best] = x;
    cout << s << endl;
    exit(0);
  }
  else if (even2){
     s[s.size()-1] = s[idx];
    s[idx] = x;
    cout << s << endl;
    exit(0);
  }
 
  return 0;
 
}
  
