#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int n , x , y;
  cin >> n;
  vector < pair < int , int > > v;
  bool upper  = false , lower = false , left = false , right = false;
  for ( int i = 0 ; i < n ; ++i){
    cin >> x >> y;
    v.push_back(make_pair(x,y));
  }
  int cnt = 0;
  for ( int i = 0 ; i < n ; ++i){
    x = v[i].first;
    y = v[i].second;
    upper  = false , lower = false , left = false , right = false;
    
    for ( int j = 0 ; j < n ; ++j){
      if ( i == j ) continue;
      if ( v[j].first > x && v[j].second == y)
       right = true;
      if ( v[j].first < x && v[j].second == y)
       left = true;
      if ( v[j].first == x && v[j].second > y)
       upper = true;
      if ( v[j].first == x && v[j].second < y)
       lower = true;
      
    }
 
     if ( left && right && upper && lower)
         cnt++;
    
  }
 
 
 cout << cnt << endl;
    
}
