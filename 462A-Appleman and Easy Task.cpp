#include <bits/stdc++.h>
 
using namespace std ;
 
vector < vector<char> > board;
int xd[4] = {1 ,0 , -1 , 0};
int yd[4] = {0 ,1 , 0 , -1};
 
int n , cnt = 0;
bool check( int x , int y){
 
       for ( int i = 0 ; i < 4 ; ++i)
         if ( x+xd[i] < n && x+xd[i] >= 0 && y+yd[i] < n && y+yd[i] >= 0 && board[x+xd[i]][y+yd[i]] == 'o')
           cnt++;
 
      if (cnt%2 == 0)
        return true; 
      else 
        return false;
       
}
 
int main(){
  char xo;
  cin >> n;
  board.resize(n);
  
  for ( int i = 0 ; i < n ; ++i){
    for ( int j = 0 ; j < n ; ++j){
      cin >> xo;
      board[i].push_back(xo);
    }
  }
   
    for ( int i = 0 ; i < n ; ++i){
      for ( int j = 0 ; j < n ; ++j){
        if ( !check(i , j) ){
           cout <<"NO" << endl;
           exit(0);
        }
     }
    }
    
    cout << "YES" << endl;
 
}
