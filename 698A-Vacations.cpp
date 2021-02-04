#include <bits/stdc++.h>
 
using namespace std ;
 
int t , day[101] , dp[101][3][3];
 
int calc( int idx , bool gym , bool contest)
{
  if ( idx == t) return 0;
  
  int  &ret = dp [idx][gym][contest];
 
  if ( ret != -1)  return ret;
 
  ret = 1 + calc( idx+1 , 0 , 0);
 
  if ( day[idx] == 3 && !gym && !contest){
    ret = min ( ret ,min ( calc( idx+1 , 1 , 0) , calc( idx+1 , 0 , 1))) ;
  }
  else if ( day[idx] == 3 && !contest )
            ret = min ( ret , calc( idx+1 , 0 , 1)) ;
  else if ( day[idx] == 3 && !gym )
  ret = min ( ret , calc( idx+1 , 1 , 0)) ;
 
 
 
  if ( day[idx] == 2 && !gym)
  ret = min ( ret , calc ( idx+1 , 1 , 0));
  if ( day[idx] == 1 && !contest)
  ret = min ( ret , calc ( idx+1 , 0 , 1));
   
  return ret;
 
}
 
int main (){
   scanf("%d" , &t);
  
 
   memset ( dp , -1 , sizeof dp);
 
 
  for ( int i = 0 ; i < t ; ++i){
     scanf("%d" , &day[i]);
  }
  cout << calc(0 , 0 , 0) << endl;
 
}
