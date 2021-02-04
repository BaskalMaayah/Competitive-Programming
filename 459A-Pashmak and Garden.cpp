#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
 
  int x1 , y1 , x2 , y2;
 
  cin >> x1 >> y1 >> x2 >> y2;
 
  if ( y2 - y1 == 0 && abs(x2 - x1) != abs(y2 - y1)){
    int y3 = x2-x1;
    //cout << 123 << endl;
    if ( y3+y1 > 1000 || y3+y1 < -1000){
     y3 = x1 - x2;
     //cout << y3 << endl;
    }
    cout << x1 << " " << y1 + y3 << " " << x2 << " " << y2 + y3 << endl;
    
  }
  else if ( x2 - x1 == 0 && abs(x2 - x1) != abs(y2 - y1)){
      int x3 = y2 - y1;
   if ( x3+x1 > 1000 || x3+x1 < -1000)
     x3 = y1 - y2;
    cout << x3+x1 << " " << y1 << " " << x3+x1 << " " << y2 << endl;
  }
  else if (abs(x2 - x1) == abs(y2 - y1)){
      cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
  }
  else 
    cout << -1 << endl;
  
 
 
  
}
