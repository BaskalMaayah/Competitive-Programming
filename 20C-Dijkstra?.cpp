#include <bits/stdc++.h>
 
using namespace std ;
 
typedef long long ll;
 
bool vis[100002];
int parent[100002];
ll cost[100002];
vector < vector < pair <int , int> > >g;
vector <int> sol;
priority_queue <pair< ll , int> >  q;
 
void dijksta( int src)
{
   int n;
   ll c;
   memset(vis , false , sizeof vis);
   memset(parent , -1 , sizeof parent);
     for (int i = 0 ; i < 100002 ; i++)
          cost[i]=1e18;
 
   cost[src] = 0;
   
   q.push(make_pair(0 , src));
 
   while (!q.empty())
   {
       n = q.top().second;
       c = -q.top().first;
       q.pop();
       if ( vis[n] ) continue;
       else vis[n] = true;
       
       for ( int i = 0 ; i < g[n].size() ; ++i)
       {
          if(c+g[n][i].first < cost[g[n][i].second])
            {
               cost[g[n][i].second] = c+g[n][i].first;
              parent[g[n][i].second] = n;
              q.push(make_pair( (c+g[n][i].first)*-1 , g[n][i].second));
            }
       }
 
   }
 
}
 
int main ()
{
  int n , e;
  int x , y , c;
  scanf("%d %d" , &n ,&e);
    g.resize(n);
   for ( int i = 0 ; i < e ; ++i)
   {
       scanf("%d %d %d" , &x ,&y , &c);
       g[x-1].push_back(make_pair(c , y-1));
       g[y-1].push_back(make_pair(c , x-1));
   }
    
    dijksta(0);
    
    if ( parent[n-1] == -1)
    {
       puts("-1");
       exit(0);
    }
    
    
     int temp = n - 1;
 
    while ( temp != -1 )
    {
      sol.push_back(temp);
      temp = parent[temp];
    }
    //cout << sol.size() << " " ;
 
   for ( int i = sol.size()-1 ; i >= 0 ; --i )
      cout << sol[i] + 1 << " ";
 
  return 0;
}
