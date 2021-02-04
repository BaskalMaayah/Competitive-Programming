#include <bits/stdc++.h>
 
using namespace std ;
 
vector<int> w;
vector<int> l;
 
int main ()
{
 
  int n , m , x , y , sum = 0;
 
  scanf("%d" , &n);
   for  ( int i = 0 ; i < n ; ++i )
   {
     scanf("%d" , &x);
     w.push_back(x);
     sum += x;
     l.push_back(sum);
   }
   int idx ;//= lower_bound(l.begin() , l.end() , 2) - l.begin();
   //  printf("%d\n" , idx+1 );
   scanf("%d" , &m);
   for (int i = 0 ; i < m ; ++i)
   {
       scanf("%d" , &y);
       idx = lower_bound(l.begin() , l.end() , y) - l.begin();
       printf("%d\n" , idx+1);
   }
   return 0;
}
