#include <bits/stdc++.h>
 
using namespace std ;
 
map <int , int> tra;
vector <int> pos;
 
int main(){
    int n , s, t , x , cnt=0;
    scanf("%d %d %d" , &n ,&s ,&t);
     if ( s == t){
      puts("0");
      exit(0);
     }
 
    for ( int i = 0 ; i < n ; ++i){
       scanf("%d" , &x);
       pos.push_back(x);
       tra[i+1]=x;
    }
 
    for (int i = 0 ; i < pos.size() ; ++i){
      s = tra[s];
      cnt++;
      if ( s==t) break;
    }
   
   // cout << s;
   
    if ( s == t)
       cout << cnt << endl;
    else
       puts("-1");
      
 
}
