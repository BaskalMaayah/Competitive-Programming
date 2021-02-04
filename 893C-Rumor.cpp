#include <bits/stdc++.h>
using namespace std ;
int const N = 100001;
long long gold[N];
vector <vector<int>> e;
vector <long long> cost;
bool vis[N]={false};
long long pay = 100000000;

void dfs(int n){
    vis[n]=true;
    for ( int i = 0 ; i < e[n].size();++i){
      if (!vis[e[n][i]]){
        pay = min(pay,gold[e[n][i]]);
        dfs(e[n][i]);
      }
 }
   

}

int main(){
  
long long c,sum=0;
int n , m , from , to;
cin >> n >> m;
e.resize(n);
for ( int i = 0 ; i < n ; ++i){
  cin >> gold[i];}


for ( int i = 0 ; i < m ; ++i){
  cin >> from >> to;
  e[from-1].push_back(to-1);
  e[to-1].push_back(from-1);
}

for ( int i = 0 ; i < n ; ++i){
  if (!vis[i]){
    pay = gold[i];
    dfs(i);
    //cout << pay << endl;
    cost.push_back(pay);
    }
}

 for ( int i = 0 ; i < cost.size() ; ++i)
     sum += cost[i];

   cout << sum<< endl;



}
