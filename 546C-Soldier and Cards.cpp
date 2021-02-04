#include <bits/stdc++.h>
 
using namespace std ;
 
queue <int> p1;
queue <int> p2;
bool vis[11][11];
bool gameover = false;
int cnt = 0;
int s1 , s2;
void BFS()
{
  int l , m;
  memset( vis , false , sizeof vis);
   while (!p1.empty() && !p2.empty())
   {
      l = p1.front();
      m = p2.front();
     p1.pop(); p2.pop();

      if ( cnt > 10000000)
         {
           gameover = true;
           puts("-1");
           break;
         }
         cnt++;
      vis[l][m] = true;
    
      if( l > m )
      {
          p1.push(m);
          p1.push(l);
      }
      else
      {
        //cout << 123 << endl;
          p2.push(l);
          p2.push(m);
      }
   }
}
 
int main ()
{
  int n ;
  scanf("%d" , &n);
   int x , y , c1 , c2 ;
  scanf("%d" , &x);
  for ( int i = 0 ; i < x ; ++i)
  {
    scanf("%d" , &c1);
    p1.push(c1);
  }
  scanf("%d" , &y);
  for (int i = 0 ; i < y ; ++i)
  {
    scanf("%d" , &c2);
    p2.push(c2);
  }
  s1 = p1.size();
  s2 = p2.size();
  BFS();
   if (p1.empty() && !gameover)
      printf("%d %d", cnt , 2);
   else if (p2.empty() && !gameover)
      printf("%d %d", cnt , 1);
   
   return 0;
} 
