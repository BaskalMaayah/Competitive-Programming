#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  
  int n ;
  cin >> n;
  char x, y , a[310][310];
  bool outer = true;
 
  for ( int i = 0 ; i < n ; ++i)
     for ( int j = 0 ; j < n ; ++j)
        cin >> a[i][j];
 
  x = a[0][0];
  for ( int i = 0 , j = n-1; i < n ; ++i , --j){

     if ( a[i][i] != x || a[i][j] != x){
       outer = false;
       break;
     }
     else{
       a[i][i] = '1';
       a[i][j] = '1';
     }
  }
  y = a[0][1];
 
  for ( int i = 0 ; i < n ; ++i)
     for ( int j = 0 ; j < n ; ++j)
        if ( a[i][j] != '1' && a[i][j] != y){
          outer = false;
          break;
        }
 
  if ( outer && x != y)
     cout << "YES" << endl;
  else
     cout << "NO" << endl;
 
    return 0;
  
}
