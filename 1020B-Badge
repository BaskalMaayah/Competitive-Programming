#include <bits/stdc++.h>
 
using namespace std ;
 
   int n , x , ans;
 
 vector <vector <int> > v;
 bool vis[10001];
 
 void DFS ( int idx){
   if ( vis[idx] == true){
      ans = idx + 1;
    return;
   }
   vis[idx] = true;
 
   for ( int i = 0 ; i < v[idx].size() ; ++i)
       DFS ( v[idx][i] );
   
 
 
 }
 
 int main (){
   
   scanf( "%d" , &n);
   v.resize(n);
    for ( int i = 0 ; i < n ; ++i){
     scanf("%d" , &x);
     --x;
     v[i].push_back(x);
    }
   for ( int i = 0 ; i < n ; ++i){
    memset ( vis , false , sizeof vis);
    DFS(i);
    cout << ans << " ";
   }
 
  return 0;
 
}
