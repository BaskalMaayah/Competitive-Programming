#include <bits/stdc++.h>
using namespace std ;
 
int main(){
  int n, k , c, candy[101], sum=0,days=0,handle=0;
  bool yes = false ;
  cin >> n >> k;
 
  for ( int i = 0 ; i < n ; ++i){
    cin >> c;
    candy[i] = c;
  }
 
  for ( int i = 0 ; i < n ; ++i){
 
      if (candy[i] > 8){
         sum += 8;
         handle += (candy[i]-8);
         days++;
         if ( sum >= k){
           yes = true;
           break;
         }
      }
      else {
       days++;
         sum += candy[i];
         if (handle >= 8 - candy[i]){
            sum += 8 - candy[i];
            handle -=  (8 - candy[i]);
         }
          else{
            sum += handle;
            handle = 0;
          }
         if ( sum >= k){
           yes = true;
           break;
         }
 
 
      }
 
  }
 
  if (yes)
   cout << days << endl;
  else
  cout << -1 << endl;
 
}
 
 
