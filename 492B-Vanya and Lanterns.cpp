#include <bits/stdc++.h>
 
using namespace std;
 
long long a[1001];
long long d[1001];
int n ;

int main ()
{
 
  long long l;
  double maxx1 = 0 , maxx2 = 0, maxx3 = 0;
 
  cin >> n >> l;
 
  for ( int i = 0 ; i < n ; ++i){
    cin >> a[i];
 
  }
  sort ( a , a+n);
  for ( int i = 0 ; i < n-1 ; ++i){
    d[i] = a[i+1] - a[i];
  //  cout << d[i] << endl;
  }
  sort ( d , d+n-1);
 
   

  maxx1 = d[n-2]/2.0;
  
  if (a[0] != 0)
  maxx2 = a[0];
  if ( a[n-1] != l )
  maxx3 = l - a[n-1] ;

   cout << fixed << max ( maxx1 , max( maxx2 , maxx3))  << endl;
 
}
