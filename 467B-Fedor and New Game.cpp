#include <bits/stdc++.h>
 
using namespace std;
 
 
int main ()
{
  vector <int> v;
    int n , m , k , cnt = 0 ;
    scanf("%d %d %d" , &n , &m , &k);
    v.resize(m+1);
        //cout << 123 << endl;
      for ( int i = 0 ; i < m+1 ; ++i)
         scanf("%d" , &v[i]);
    
    for ( int i = 0 ; i < m+1 ; ++i)
    {
       if (__builtin_popcount(v[i] ^ v[m]) <= k)
       cnt++;
    }
     
     printf("%d" , cnt-1);
 
     return 0;
}
