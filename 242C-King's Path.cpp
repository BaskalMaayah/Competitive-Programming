#include <bits/stdc++.h>

using namespace std;

	int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
	int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
  set<pair<int , int>> pts;
  map <pair<int , int>,bool> vis;
  pair <int,int> cur,check;
  queue <pair <int,int>> q;
  int ans=0;

  void BFS(pair <int,int> f , int x2 , int y2){
    vis[f] = true;
    int nx , ny;
    q.push(f);
    while (!q.empty()){
      int size = q.size();
      
      ans++;
    for ( int k = 0 ; k < size ; ++k){
    cur = q.front();
    q.pop();

    for (int i = 0; i < 8; ++i){
      nx = cur.first + dx[i];
      ny = cur.second + dy[i];
   check= {nx,ny};
   if ( pts.count(check) != 0 && vis[check] == false){
     vis[check] = true;
     q.push(check);

  if (check.first == x2 && check.second == y2) 
		return ;
				
   }
}
  }
  }  //////
  }

int main() {
  int x0 ,y0 , x1 , y1 , n , r , a , b;
  pair <int,int> first;
  cin >> x0 >> y0 >> x1 >> y1;
  cin >> n;


  for ( int i = 0 ; i < n ; ++i){
    cin >> r >> a >> b;

    for ( int j = a ; j <= b ; ++j)
       pts.insert(make_pair(r,j));
  }
  first = {x0,y0};
  BFS(first , x1 , y1);

 if ( check.first == x1 && check.second == y1 )
  cout << ans << endl;
  else
   cout << -1 << endl;
  }
