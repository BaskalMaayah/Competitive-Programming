#include <bits/stdc++.h>
 
using namespace std ;
 
vector <int> v;
 
int main ()
{
  
  long long n , m , x;
  cin >> n >> m;
   
   for ( int i = 0 ; i < m ; ++i)
     {
       cin >> x;
       v.push_back(x);
     }
 
     long long s;
 
     s = v[0] - 1;
    // cout << s << endl;
     for ( int i = 1 ; i < m ; ++i)
     {
        if ( v[i] >= v[i-1])
        s += (v[i] - v[i-1]);
        else 
        s += ( n - v[i-1] + 1 ) + (v[i] -1);
     }
 
     cout << s << endl;
    return 0;
 
}
