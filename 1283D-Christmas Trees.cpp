#include <bits/stdc++.h>

using namespace std;


int n, m;
long long x;
map <long,bool> vis;
map <long , long> dis;
vector<long long> trees;
queue<long long> q;
long long sum = 0 , cnt=0;

void bfs() {

  while(!q.empty()) {
    

    int front = q.front();
    int child;
    q.pop();
    int i = 0;
    for(bool left = 1 , right = 0 ; i < 2; right = 1 , left = 0 , i++) {
      if (cnt == m)  break;
      if (left)
            child = front-1;
      if (right)
           child = front+1;
         
      if(vis[child])
        continue;
      
      vis[child] = true;
      q.push(child);
      cnt++;
      dis[child] = dis[front]+1; 
      sum +=dis[child];
      trees.push_back(child);
    }
    if (cnt == m)  break;
  }
  if (cnt == m)  return;

}

int main() {
  cin >> n >> m;
  for(int i = 0; i < n; ++i) {
    cin >> x;
    q.push(x);
    vis[x] = true;
    }


  bfs();
  
  cout << sum << endl;
  for ( int i = 0 ; i < trees.size() ; ++i)
     cout << trees[i] << " ";
  
  return 0;
}
