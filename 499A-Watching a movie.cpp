#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int n , x , l , r , watch = 0 , pre;
    cin >>n >> x;
 
    for ( int i = 0 ; i < n ; ++i){
        cin >> l >> r;
        if ( i == 0){
            if ( l - 1 >= x)
            watch += (l-1) % x;
            else
            watch += l - 1;
        }
        else{
            if (l - pre - 1 >= x)
             watch += (l - pre - 1) % x;
             else
             watch += (l - pre - 1);
            // cout << watch << endl;
        }
        
         watch += r - l + 1;
        // cout << watch << endl;
        pre = r;
    }
    
    cout << watch << endl;
    
}
