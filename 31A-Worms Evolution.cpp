#include <bits/stdc++.h>
 
using namespace std;
vector <int> l; 
int main() {
  int n, a ,sum , cnt=0;
  cin >> n;
 
  for ( int i = 0 ; i < n ; ++i){
    cin >> a;
    l.push_back(a);
  }
 
 for ( int i = 0 ; i < n ; ++i){
   for ( int j = 0 ; j < n ; ++j){
      if ( i != j)
      sum = l[i] + l[j];
      else
       continue;
      for( int k = 0 ; k < n; ++k){
        if (l[k] == sum){
          cout << k+1 << " " << j+1 << " " << i+1 ;
          return 0;
        }
      }
 
 }
 }
 
 cout << -1 << endl;
  return 0;
}
