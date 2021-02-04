#include <bits/stdc++.h>
 
using namespace std ;
 
 int a[100][100] , b[100][100] , c[100][100];
 
int main(){

  int x , y;
  scanf("%d %d" , &x , &y);
 
  for (int i = 0 ; i < x ; ++i)
    for ( int j = 0 ; j<y ; ++j){
        scanf("%d" , &b[i][j]);
        c[i][j] = 1;
        a[i][j] = 1;
    }
 
      for (int i = 0 ; i < x ; ++i)
    for ( int j = 0 ; j < y ; ++j){
        if (b[i][j] == 0){
           for ( int k = 0 ; k < x; ++k){
               a[k][j] = 0;
               c[k][j] = 0;
           }
           for ( int k = 0 ; k < y; ++k){
               a[i][k] = 0;
               c[i][k] = 0;
           }
        } 
    }
 
     for (int i = 0 ; i < x ; ++i)
        for ( int j = 0 ; j < y ; ++j){
          if (a[i][j] == 1)
          {
           for ( int k = 0 ; k < x; ++k){
               c[k][j] = 1;
           }
           for ( int k = 0 ; k < y; ++k){
               c[i][k] = 1;
           }
          }
        }
 
        for (int i = 0 ; i < x ; ++i)
           for ( int j = 0 ; j < y ; ++j)
             if ( c[i][j] != b[i][j]){
               puts("NO");
               return 0;
             }
        puts("YES");
         for (int i = 0 ; i < x ; ++i){
           for ( int j = 0 ; j < y ; ++j)
                cout << a[i][j] << " " ;
                  cout << endl;
         }
           
  return 0;

}
