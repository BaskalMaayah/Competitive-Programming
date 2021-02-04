#include <bits/stdc++.h>
 using namespace std;
 
vector <int> v;
int main()
{
    int t , k ;
    scanf("%d%d" , &t , &k);
    for ( int i = 0 ; i <t ; i++)
    {
        int n;
        scanf("%d" , &n);
        v.push_back(n);
    }
 
    sort ( v.begin() , v.end());
    
    int yes = v[k-1];
 
    if ( k == t)
    cout << v[k-1];
     else if ( k == 0  )
     {
     if (v[0] - 1 > 0)
            cout <<  v[0] - 1;
            else
             puts("-1");
     }
     else if ( v[k] <= yes)
     puts("-1");
     else
     cout << yes;
  
 
}
