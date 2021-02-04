#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int n , m , x , y , TL;
    cin >> n >> m;
    vector <int> c;
    vector <int> w;
 
    for ( int i = 0 ; i < n ; ++i){
       cin >> x;
       c.push_back(x);
    }
 
    for ( int i = 0 ; i < m ; ++i){
       cin >> y;
       w.push_back(y);
    }
 
    sort(c.begin() , c.end());
    sort(w.begin() , w.end());
    
    TL = c[c.size()-1];
 
 
      if ( TL < c[0]*2)
          TL = c[0]*2;
 
 
    if (TL >= w[0])
      cout << -1 << endl;
    else
      cout << TL << endl;
 
    
    
}
