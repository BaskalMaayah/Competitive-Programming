#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
  int n , m , num;
  cin >> n >> m;
  string x;
  vector <int> s , b;
  vector < vector < int > > st;
  st.resize(n);
  s.resize(n);
  b.resize(m);
  
  for ( int i = 0 ; i < n ; ++i){
    cin >> x;
      for ( int j = 0 ; j < m ; ++j){ 
          num = x[j]-'0' ;       
          st[i].push_back(num);
      }
  }
  int maxx = -1e9;
    for ( int i = 0 ; i < m ; ++i){
         maxx = -1e9;
      for ( int j = 0 ; j < n ; ++j){
          maxx = max ( st[j][i] , maxx);
      }
      b[i] = maxx;
    }
 
    int cnt = 0;
    for ( int i = 0 ; i < n ; ++i){
      for ( int j = 0 ; j < m ; ++j){
          if ( st[i][j] < b[j])
            continue;
          else{
              cnt++;
              break;
          }
            
      }
    }
    
    cout << cnt << endl;
    
    
    
}
