#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
   int n,x;
   cin>>n;
     
   for (int i=0; i<n; ++i){
         
              bool out = false;
              cin>>x;
            if (x < 3){
              cout<<"NO"<<endl;
              continue;
            }
           
           if (x%3 == 0 || x%7==0){
                 cout<< "YES"<<endl;
                 out = true;
                 continue;
           }
          else if (true){
          int y=x;
          while ( y >0){
                  y=y-3;
                  if (y%7 ==0){
                      cout<< "YES"<<endl;
                       out = true;
                       break;
                  }
                     
          }
                     
          }
            if (out == false)
            cout << "NO"<<endl;
          
   }
 
     
}
