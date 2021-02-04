#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
  int n , a[101];
 
   cin >> n;
 
   for ( int i = 0 ; i < n ; ++i)
     cin >> a[i];

   int maxx , e , minn = 1e9 , end , start;
   for ( int i = 1 ; i < n-1 ; ++i){
     maxx = -1e9;
           for ( int j = n-1 ; j > 0 ; --j){
              end = a[j-1];
              start = a[j];
              if ( j-1 == i)
                end = a[j-2];
              if ( j == i && i != 1){
                start = a[j-1];
                end = a[j-2];
              }
              if ( j == i && i == 1)
                break;
              // if ( i==2) cout << start - end << endl;
               maxx = max ( maxx , start - end );
             //  cout << maxx << endl;
           }
        minn = min ( minn , maxx);
   }
 
   cout << minn << endl;
}
