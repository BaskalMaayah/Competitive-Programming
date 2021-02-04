
#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
   int t , sum = 1;
   int a[100001];
   scanf("%d" , &t);
 
   for ( int i = 0 ; i<t ; ++i)
     scanf("%d" , &a[i]);
    
     sum += a[0];
 
     for ( int i = 1 ; i < t ; ++i)
        sum += abs(a[i]-a[i-1]) + 2;
 
 
     cout << sum << endl;
 
 
    return 0;
}
    
