#include <bits/stdc++.h>
 
using namespace std ;
 
queue <int> q;
bool vis[20001];
int steps[20001];
int need;
int n , m;
 
void BFS ()
{
  memset (steps , 0 , sizeof steps);
  memset (vis , false , sizeof vis);
 
  q.push(n);
  vis[n] = true;
 
  while( !q.empty())
  {
      need = q.front();
      q.pop();
 
      if ( need == m)
      return;
      
      if ( need*2 < 20001 && !vis[need*2])
      {
          q.push(need*2);
          vis[need*2] = true;
          steps[need*2] = steps[need] + 1;
      }
         if ( need-1 > -1  && !vis[need-1])
      {
          q.push(need-1);
          vis[need-1] = true;
          steps[need-1] = steps[need] + 1;
      }
        
 
  }
}
 
int main ()
{
    scanf("%d %d" , &n , &m);
 
  BFS();
 
  printf("%d" , steps[need]);
 
  return 0;
 
}
