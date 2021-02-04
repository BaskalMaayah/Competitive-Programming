#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> cell;
bool vis[30001]={0};
int dest;
void dfs(int n){
  if (n > dest){
    puts("NO");
    exit(0);
  }
  else if ( n == dest){
    puts("YES");
    exit(0);
  }
  else{
    for ( int i = 0; i < cell[n].size(); ++i){
      if (!vis[cell[n][i]]){
        vis[cell[n][i]] = true;
        dfs(cell[n][i]);
      }

    }
  }

}

int main(){
  int n , x;
  cin >> n >> dest;
  cell.resize(n+1);
  for ( int i = 0 ; i < n-1 ; ++i){
    cin >> x;
    cell[i+1].push_back(i+1+x);
   }

  
  dfs(1);

}
