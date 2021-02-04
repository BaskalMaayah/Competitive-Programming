#include <bits/stdc++.h>
 
using namespace std ;
 
int main ()
{
  vector < pair <int , string> > v;
  int n , m;
  bool yes = true;
  scanf("%d %d" , &n , &m);
  string s;
  for ( int i = 0 ; i < n ; ++i)
  {
     cin >> s;
     v.push_back(make_pair(s.size() , s));
  }
 
  sort(v.begin() , v.end());
  
    /*for ( int i = 0 ; i < n ; ++i)
    {
      cout << v[i].first << "  " << v[i].second << endl;
    }*/
 
  for ( int i = 0 ; i < n-1 ; ++i)
  {
    if ( v[i+1].second.find(v[i].second) == string::npos)
    {
      yes = false;
      break;
    }
  }
 
  if ( yes)
   {
     puts("YES");
     for ( int i = 0 ; i < v.size() ; ++i)
     cout << v[i].second << endl;
   }
   else
   puts("NO");
  
  return 0;
}
