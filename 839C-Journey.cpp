#include <bits/stdc++.h>
using namespace std ;

vector<vector<int>> v;
double prob[100005] = {0.0};
int length[100005] = {0};
int vis[100005] = {0};
double parent_prob,parent_len, ans=0.0;
void dfs(int city){
  
     vis[city] = true;

     
     
    for ( int i = 0, ncity; i < v[city].size() ; ++i){
         ncity = v[city][i];
         if (!vis[ncity]){
            parent_prob = prob[city];
            if ( city == 0)
            parent_len = v[city].size();
            else
            parent_len = v[city].size()-1;
             prob[ncity] = parent_prob/parent_len;
             length[ncity] = length[city]+1;
            
         dfs(ncity);
         }
     }
}

int main(){
  
  int n , from , to ;
  cin >> n;
  v.resize(n+5);
  for ( int i = 0 ; i < n-1; ++i){
    cin >> from >> to;
    v[from-1].push_back(to-1);
    v[to-1].push_back(from-1);
  }
 
  prob[0] = 1.0;
  length[0] = 0;

  dfs(0);
 for ( int i = 0 ; i < n ; ++i){
     if (v[i].size() == 1)
       ans = ans + (prob[i]*length[i]);
 }
 
 cout << fixed << setprecision(12) << ans << endl;
}


