#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
  int n , s;
  vector <int> res;
  vector <int> max;
 
  scanf("%d %d" , &n , &s);
  int temp = s;
 
  if ( s == 0){
      if ( n == 1 )
        cout << 0 << " " << 0 << endl;
      else
        cout << -1 << " " << -1 << endl;
 
      exit(0);
  }
 

  else {
     for ( int i = 0 ; i < n ; ++i){
       if ( temp > 9){
         res.push_back(9);
         max.push_back(9);
         temp -= 9;
       }
       else{
         res.push_back(temp);
         max.push_back(temp);
         temp = 0;
       }
 
     }
 
 
     if ( temp == 0 ){
      
      reverse( res.begin() , res.end());
 
       if (res[0] == 0){
 
         res[0] = 1;
            for (int j = 1 ; j < res.size() ; ++j ){
              if ( res[j] > 0){
                res[j] -= 1;
                break;
              }
            }
        }
     
 
        for ( int i = 0 ; i < res.size() ; ++i)
        cout << res[i];
          cout << " ";
 
 
          for ( int i = 0 ; i < max.size() ; ++i)
            cout << max[i];
            cout << endl;
 
     }
 
   else
    cout << -1 << " " << -1 << endl;
 
  }
 
	return 0;
}
 
    
