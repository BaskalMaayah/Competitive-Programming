#include <bits/stdc++.h>
 
using namespace std ;
 
queue <pair <int , int> > q;
pair <int , int> ans;
bool vis[2001][2001];
 int xd[] = { 0 , 1 , 0 , -1 };
 int xy[] = { 1 , 0 , -1 , 0 };
 int n , m ;
 
void BFS()
{
   int x , y , nx , ny;
  while (!q.empty())
  {
     x = q.front().first;
     y = q.front().second;
 
      q.pop();
 
    ans.first = x;
    ans.second = y;
   
     for ( int i = 0 ; i < 4 ; ++i)
        {
          nx = x + xd[i];
          ny = y + xy[i];
 
          if ( nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny])
          {
            vis[nx][ny] = true;
            q.push(make_pair(nx,ny));
          }
        }
     
  }
}
 
int main ()
{
   freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  
  int  k , x , y ;
 
  scanf("%d %d %d" , &n , &m , &k);
 
  for ( int i = 0 ; i < k ; ++i)
  {
    scanf("%d %d" , &x , &y);
    q.push(make_pair(x-1,y-1));
    vis[x-1][y-1] = true;
  }
 
  BFS();
 
   printf("%d %d" , ans.first + 1 , ans.second + 1);
}
