#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
  int n , l , r , x , a[16] , sum , mx , mn  , cnt , ans = 0;
  scanf("%d %d %d %d" , &n , &l , &r , &x);
 
  for ( int i = 0 ; i < n ; ++i)
    scanf("%d" , &a[i]);
        
    for ( int m = 0 ; m < ( 1 << n) ; ++m){
      sum = 0 , mx = -1e9 , mn = 1e9 , cnt = 0;
         for ( int j = 0 ; j < n ; ++j){
           if ( m & ( 1 << j)){
             //cout << 123 << endl;
               cnt++;
               mx = max ( mx , a[j]);
               mn = min ( mn , a[j]);
               sum += a[j];
           }
         }
         if ( cnt >= 2 && mx-mn >= x && sum >= l && sum <= r )
           ans++;
    }
                 
 
    printf("%d" , ans);
 
  
}
