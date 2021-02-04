#include <bits/stdc++.h>
 
using namespace std ;
 
vector < vector<int> > auction;
vector <int> s;
vector <int> num;
int main(){
 
      int seller , unit , p , x;
      cin >> seller >> unit;
      auction.resize(seller);
 
      for ( int i = 0 ; i < seller ; ++i){
         cin >> p;
           for ( int j = 0 ; j < p ; ++j){
             //cout << i << endl;
              cin >> x;
              auction[i].push_back(x);
           }
            sort( auction[i].begin() , auction[i].end() );
      }
 
    int cnt = 0 ;
    bool can = false;
 
     for ( int i = 0 ; i < seller ; ++i){
           for ( int j = 0  ;  j < auction[i].size() ; ++j){
              if ( auction[i][j] < unit){
                 can = true;
                 break;
              } 
 
           }
 
           if (can){
                   cnt++;
                   s.push_back(i+1);
                 }
                 can = false;
     }
   
     cout << cnt << endl;
     if (cnt){
     cout << s[0] ;
     for ( int i = 1 ; i < s.size() ; ++i)
          cout << " " << s[i] ;
     }
 
 
          return 0;
}
