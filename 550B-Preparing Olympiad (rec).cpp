#include <bits/stdc++.h>
 
using namespace std ;
 
  int n , l , r , x , a[16] , sm1 , sm2;
  
int calc ( int i , int sum , int cnt , int mn , int mx)
{
    if ( i == n){
       if ( sum >= l && sum <= r && mx - mn >= x  && cnt >= 2 )
       return 1;
       else
         return 0;         
    }
 
    int  ret = calc(i+1 , sum , cnt , mn , mx) + calc(i+1 , sum+a[i] , cnt+1 , min (mn , a[i]) , max(mx , a[i]));
 
    return ret;
 
}
 
int main(){
  
 // memset( dp , -1 , sizeof dp);
  scanf("%d %d %d %d" , &n , &l , &r , &x);
 
  for ( int i = 0 ; i < n ; ++i)
    scanf("%d" , &a[i]);
        
   cout << calc(0 , 0 , 0 , 1e9 ,-1e9) << endl;
                 
  
}
