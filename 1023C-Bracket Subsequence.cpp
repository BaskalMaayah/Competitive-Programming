#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
 
 int n , k , cnt = 0 , start = 0 , end = 0;
 string s;
 scanf("%d %d" , &n , &k);
 cin >> s;
 string ans = ""; 
 
 for ( int i = 0 ; i < n ; ++i){
 
   if ( start >= k/2 ){
        if ( s[i] == ')' && end < k/2){
          end++;
          ans += s[i];
        }
        else
           continue;
   }
    else if ( start < k/2 ){
      //cout << start << endl;
      if ( s[i] == '('){
          start++;
          ans += s[i];
      }
      else if ( s[i] == ')'){
          end++;
          ans += s[i];
      }
    }
   
 }
 
 cout << ans << endl;
   return 0;
}
    
 
