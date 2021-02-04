#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
 
int n , p , q;
cin >> n;
bool p_less = false , p_more = false , q_less = false , q_more = false;
 
for ( int i = 0 ; i < n ; ++i){
   cin >> p >> q;
   if ( p < q){
     p_less = true;
     q_more = true;
   }
      if ( p > q){
     p_more = true;
     q_less = true;
   }
}
 
if ( p_less && p_more && q_less && q_more )
  cout << "Happy Alex"<<endl;
else
  cout << "Poor Alex" << endl;
}
