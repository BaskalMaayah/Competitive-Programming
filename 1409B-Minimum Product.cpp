#include <bits/stdc++.h>
using namespace std;
 
int main(){
long long t, a, b, x, y, n, num_tmp, sub_tmp, num_tmp1, sub_tmp1, hold,ans ,case1, case2, a2 , b2 , n2;
cin >> t;
for ( int i=0 ; i < t ; ++i){
  cin >> a >> b >> x >> y >> n;
 
   if (a-n < x){
     a2 = x;
     n2 = n -(a-x);
    // cout << n << endl;
     if (b-n2 < y){
     b2 = y;
     }
     else 
      b2 = b-n2;
 
      case1 = a2*b2;
   }
   else{
     a2 = a - n;
     case1 = a2*b;
   }
     
    if (b-n < y){
     b2 = y;
     n2 = n -(b-y);
     if (a-n2 < x){
     a2 = x;
     }
     else 
      a2 = a-n2;
 
      case2 = a2*b2;
   }
   else{
     b2 = b - n;
     case2 = a*b2;
   //  cout << a << " " << n << " " << case2 << endl;
   }
 
 
   if ( a <  b ){
     num_tmp = a;
     sub_tmp = x;
     num_tmp1 = b;
     sub_tmp1 = y;
   }
   else{
     num_tmp = b;
     sub_tmp = y;
     num_tmp1 = a;
     sub_tmp1 = x;
   }
 
    if ( num_tmp - n < sub_tmp){
      hold = num_tmp;
      num_tmp = sub_tmp;
      n = n -(hold - sub_tmp);
      if(num_tmp1-n < sub_tmp1){
        num_tmp1 = sub_tmp1;
      }
      else
      num_tmp1= num_tmp1-n;
    
     ans =  num_tmp1*num_tmp;
    }
    else{
    num_tmp = num_tmp - n;
      ans =num_tmp1*num_tmp;
    }
  cout << min(ans , min(case1,case2)) << endl;
}
}
