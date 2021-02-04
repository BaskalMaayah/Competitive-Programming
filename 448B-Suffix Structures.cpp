#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
 
   string w , s , temp , del="";
   int cnt=0 , pos , x;
   cin >> w >> s;
   temp = w;
 
    for ( int i = 0 ; i < s.size() ; ++i){
        if ( temp.find(s[i]) != string::npos){
           pos = temp.find(s[i]);
           cnt++;
           temp.erase(0,pos+1);
   }
      }

   if ( cnt == s.size()){
      cout << "automaton" << endl;
      exit(0);
   }
    
 
  else{
     cnt = 0 , temp = w;

     for ( int i = 0 ; i < s.size() ; ++i){
         if ( temp.find(s[i]) != string::npos ){
              
                pos = temp.find(s[i]);
                 temp.erase(pos , 1);
                  cnt++;        
              }
         }
    
             if (cnt == s.size() && temp.empty()){
            cout << "array" << endl;
            exit(0);
              }
         else if ( cnt == s.size() && !temp.empty() ){
            cout << "both" << endl;
            exit(0);
         }
 
  }
 
  cout << "need tree"<<endl;
 
  return 0;
 
}
