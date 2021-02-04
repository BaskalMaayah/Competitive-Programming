#include <bits/stdc++.h>
 
using namespace std;
 
bool isPrime(int p){
  int m;
  m=p/2;  
  for(int i = 2; i <= m; i++)    
      if(p % i == 0)  
         return false;
 
         return true; 
}
 
int main(){
  int n ,cnt=0,add=0;
  bool almostprime = false;
  cin >> n;
  for (int i=6 ; i<=n ; ++i){
    cnt = 0; 
    almostprime = false;
    for (int k=2 ; k <= i ;++k){
             if (i%k == 0)
               if (isPrime(k)){
                  cnt++;
                  }
             
              
    }
    if (cnt == 2) 
       add++;
  } 
  cout << add << endl; 
}
