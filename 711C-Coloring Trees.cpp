#include <bits/stdc++.h>
 
using namespace std ;
typedef long long ll;
 
  int n , m , k;
  int a[101] ;
  ll p[101][101];
  ll dp[101][101][101];
 
ll calc( int idx ,int cnt , int prev)
{
  if (idx == n){
    if (cnt == k) return 0;
    else  return 1e18;
  }
 
    ll &ret = dp[idx][cnt][prev];
    
    
    if ( ret != -1)
        return ret;
    
    ret = 1e18;
 
    if (a[idx] == 0){
      for (int i = 0 ; i < m ; ++i)
         ret = min( ret , p[idx][i] +  calc(idx+1 , cnt + (prev != i)  , i));
    }
    else
      ret = calc(idx+1 , cnt + (prev != a[idx]-1) , a[idx]-1);
     return ret;
}
 
int main(){
 
  scanf("%d %d %d" , &n , &m , &k);
  memset (dp , -1 , sizeof dp);
 
  for ( int i = 0 ; i < n ; ++i)
      scanf("%d" , &a[i]);
 
  for ( int i = 0 ; i < n ; ++i)
      for (int j = 0 ; j < m ; ++j)
         scanf("%lld" , &p[i][j]);
         
  ll res = calc(0 , 0 , 200);

   if ( res == 1e18)
     cout << -1 << endl;
   else
     cout << res << endl;

}
 
