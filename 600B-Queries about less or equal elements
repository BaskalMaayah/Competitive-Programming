#include <bits/stdc++.h>
 
using namespace std ;
 
vector<int> a;
//vector<int> b;
 
int main ()
{
  int x , y , n , m;
  scanf ("%d%d" , &x , &y);
 
  for (int i = 0 ; i < x ; ++i)
  {
    scanf("%d" , &n);
    a.push_back(n);
  }
     
     sort( a.begin() , a.end());
     int idx;
 
  for (int i = 0 ; i < y ; ++i)
  {
    scanf("%d" , &m);
    idx = upper_bound( a.begin() , a.end() , m) - a.begin();
     printf("%d" , idx);
      if ( i < y-1)
    printf(" ");
  }
 
 
 
   return 0;
}
