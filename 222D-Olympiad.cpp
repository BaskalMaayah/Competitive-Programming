#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main() 
{
  int n , x , m;
  int a[100001];
  multiset<int> mls;
  multiset<int>:: iterator it;
  scanf( "%d %d" , &n , &x);
 
  for ( int i = 0 ; i < n ; ++i)
  scanf ("%d" , &a[i]);
 
  for ( int i = 0 ; i < n ; ++i)
  {
    scanf("%d" , &m);
    mls.insert(m);
  }
    int ans = 0;
  for ( int i = 0 ; i < n ; ++i)
  {
    it = mls.lower_bound( x-a[i]);
     if ( it != mls.end())
     {
         ans++;
         mls.erase(it);
     }
     
  }
 
        printf("%d %d" , 1 , ans);
 
	return 0;
}
