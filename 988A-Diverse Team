#include <bits/stdc++.h>
 
using namespace std ;
 
int main ()
{
  int arr[103];
  set <int > ans;
  set <int >::iterator iter;
  int n , m , team;
  scanf("%d %d" , &n , &m);
 
  for ( int i = 1 ; i <= n ; ++i)
   {
     scanf("%d" , &team);
     arr[team] = i;
     ans.insert(team);
   }
 
   if (ans.size() >= m)
  {
    puts("YES");
    int j = 1;
    for (  iter= ans.begin();  iter!=ans.end();++iter)
     {
       if ( j > m) break;
       printf("%d " , arr[*iter]);
       ++j;
     }
  }
   else
   puts("NO");
 
   return 0;
   
}
