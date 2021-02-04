#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
 
 int r , x , y , x1 , y1;
 double distance;
 
 scanf("%d %d %d %d %d" ,&r , &x ,  &y , &x1 , &y1);
 
 distance = sqrt( pow(x1-x , 2) + pow(y1-y , 2) );
 distance /= 2;
 cout << ceil(distance/r) << endl;
 
 return 0;
 
}
    
 
