#include <bits/stdc++.h>
 
using namespace std ;
typedef long long ll;
 
vector <ll> v;
bool vis[101];
vector <ll> ans;
vector <ll>:: iterator it;
int x;
 
void DFS ( int n )
{
  if ( ans.size() == x){
      for ( int i = 0 ; i < ans.size() ; ++i)
         cout << ans[i] << " ";
    exit(0);
  }
    
 
  if (!vis[n])
     vis[n] = true;
  else 
  return;
    ll temp1 , temp2;
    int pos;
    temp1 = v[n]*2;
    temp2 = v[n]/3;
  if ( v[n]%3 == 0){
      if ( find(v.begin() , v.end() , temp1) != v.end()){
         pos = find(v.begin() , v.end() , temp1) - v.begin();
         ans.push_back(v[pos]);
         DFS(pos);
    }
   // ans.pop_back();
   if ( find(v.begin() , v.end() , temp2) != v.end()){
        pos = find(v.begin() , v.end() , temp2) - v.begin();
        ans.push_back(v[pos]);
        DFS(pos);
    }
    else
        return;
  }
 
 
  else{
    if ( find(v.begin() , v.end() , temp1) != v.end()){
      pos = find(v.begin() , v.end() , temp1) - v.begin();
      ans.push_back(v[pos]);
      DFS(pos);
    }
    else
    return;
  }
 
 
}
 
int main()
{
   memset ( vis , 0 , sizeof vis);
  scanf("%d" , &x);
  v.resize(x);
  for ( int i = 0 ; i < x ; ++i){
       cin >> v[i];
  }
   
  for ( int i = 0 ; i < x ; ++i){
      ans.push_back(v[i]);
      DFS(i);
      if ( ans.size() != x){
        ans.clear();
        memset ( vis , 0 , sizeof vis);
      }
    
  }

}
    
