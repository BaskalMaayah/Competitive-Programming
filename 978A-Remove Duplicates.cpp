#include <bits/stdc++.h>
 
using namespace std;
 
set <int> s;
set <int>:: iterator it;
vector <int> v;
vector <int> idx;
 
int main ()
{
  int x , y;
  scanf("%d" , &x);
 
  for ( int i = 0 ; i < x ; ++i)
  {
      scanf("%d" , &y);
     // cout << y << " " ;
      v.push_back(y);
      s.insert(y);
  }
 
  for ( it = s.begin() ; it != s.end() ; it++)
  {
    for ( int j = v.size()-1 ; j >= 0 ; --j)
    if ( (*it) == v[j] )
    {
      idx.push_back(j);
      break;
    }
 
  }
  
  sort(idx.begin() , idx.end());
    cout<< s.size() <<endl;
    for ( int j = 0 ; j < idx.size() ; ++j )
    cout << v[idx[j]] << " " ;
      
      
 
     return 0;
 
}
