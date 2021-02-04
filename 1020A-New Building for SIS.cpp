
#include <bits/stdc++.h>
 
using namespace std ;
 
 int main (){
 
   int n , h , a , b , t1 , f1 , t2 , f2;
   int k;
   scanf("%d %d %d %d %d" , &n , &h , &a , &b , &k);
   int flo1 , flo2 , ans;
   for ( int i = 0 ; i < k ; ++i){
          scanf("%d %d %d %d" , &t1 , &f1 , &t2 , &f2);
        
       if ( t1 == t2){
         cout << abs( f1 - f2) << endl;
         continue;
       }
       if ( f1 >= a && f1 <= b ){
         cout << abs(t1 - t2) + abs(f1 - f2) << endl;
         continue;
       }
        else if ( f2 >= a && f2 <= b ){
         cout << abs(t1 - t2) + abs(f1 - f2) << endl;
         continue;
       }   
       else{
        flo1 = abs(f1 - a) + abs( f2 - a);
        flo2 = abs(f1 - b) + abs( f2 - b);
          ans = min ( flo1 , flo2);
        //cout << ans << endl;
        cout << ans + abs( t1 - t2) << endl;
       }
  }
 
  return 0;
 
}
