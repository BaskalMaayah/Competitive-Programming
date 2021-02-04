#include <bits/stdc++.h>
 
using namespace std ;
 
vector < vector<char> > cake;
 
int main(){
 
  int n , m , cnt = 0 , cnt2 = 0 , out = 0;
  char p;
  cin >> n >> m;
  cake.resize(n);
  bool dot = true;
 
  for ( int i = 0 ; i < n ; ++i){
    dot = true ;

    for ( int j = 0 ; j < m ; ++j){
      cin >> p;
      cake[i].push_back(p);
      if ( p == 'S')
        dot = false;

 
    }
    if ( dot ){
      cnt++;
       for ( int j = 0 ; j < m ; ++j )
          cake[i][j] = '0';
    }
  }

  dot = true ;

  for ( int i = 0 ; i < m ; ++i){
    dot = true;
    for ( int j = 0 ; j < n ; ++j)
          if (cake[j][i] == 'S')
              dot = false;
    if (dot) {
      for ( int j = 0 ; j < n ; ++j)
       if ( cake[j][i] == '0' )
          out++;
      cnt2++;
    }
  }
 
  cout << cnt*m + cnt2*n - out << endl;
 
  
      
       
}
