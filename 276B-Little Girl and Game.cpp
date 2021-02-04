#include <bits/stdc++.h>
 
using namespace std ;
  
   int alpha[27];
 
int main(){
 
    string s;
    int cnt = 0;
    bool Allpal;
    cin >> s;
    for ( int i = 0 ; i < s.size() ; ++i){
          alpha[s[i]-'a']++;
    }
    for (int i =0 ; i < 26 ; ++i){
      if ( alpha[i] % 2 == 1 )  
         cnt++;
 
      if ( cnt == 0)
        Allpal = true;
      else
       Allpal = false;
    }
       //cout << cnt << endl;
 
       if (Allpal){
         puts("First");
         exit(0);
       }
          
     if( cnt % 2 == 1)
        cout<<"First\n";
    else
        cout<<"Second\n";
}
