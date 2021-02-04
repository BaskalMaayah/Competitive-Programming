#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
 
   int n , val , sum = 0;
   string s;
   int alpha[27];
 
   cin >> s;
   scanf("%d" , &n);
   for ( int i = 0 ; i < 26 ; ++i){
     scanf("%d" , &val);
     alpha[i] = val;
   }
   
   //cout << alpha['x'-'a'] << endl;
 
   for ( int i = 0 ; i < s.size() ; ++i){
     sum += alpha[s[i]-'a'] * (i+1);
   }
 
   sort (alpha , alpha+26);
   for ( int i = s.size() ; i < n+s.size() ; ++i){
     sum += alpha[25]*(i+1); 
   }
 
   cout << sum << endl;
 
}
