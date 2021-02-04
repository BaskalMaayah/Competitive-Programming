#include <bits/stdc++.h>
 
using namespace std ;
 
int cum[100001];
map <int , int > vis;
int a[100001];
bool exist[100001];
 
int main ()
{
   int n , m , x;
   memset (exist , true , sizeof exist);
   
  scanf("%d %d" , &n , &m);
 
  
  //exist[a[0]] = true;
  //cum[0] = 0;
 
  for ( int i = 0 ; i < n ; ++i)
  {
    scanf("%d" , &a[i]);
 
  }
   vis[a[n-1]]++;
   exist[a[n-1]] = 1;
  for ( int i = n-2 ; i >= 0 ; --i)
  {    
       vis[a[i]]++;
        if ( vis[a[i]] > 1)
        exist[a[i]] = false;
     cum[i] = cum[i+1] + (exist[a[i]]);
  }
 
  for ( int i = 0 ; i < m ; ++i)
  {
    scanf("%d" , &x);
    printf("%d\n" , cum[x-1]+1);
  }
 
  return 0;
  
 
}
