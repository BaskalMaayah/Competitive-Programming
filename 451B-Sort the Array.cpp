
#include <bits/stdc++.h>
 
using namespace std ;
 
int main ()
{
  int n , pos;
  long long x ;
  vector <long long> v;
  vector < long long > ans;
  vector <long long> v2;
  map < long long , int> inp;
  //vector <long long>:: iterator it;
  scanf("%d" , &n);
  
  for ( int i = 0 ; i < n ; ++i)
  {
     scanf ("%lld" , &x);
     v.push_back(x);
     v2.push_back(x);
     inp[x] = i;
  }
  sort (v.begin() , v.end());
  int tmp = -1;
  for ( int i = n-1 ; i >= 0 ; --i)
     if ( v2[i] < v2[i-1]){
       tmp = i;
       break;
     }
        
  
 
  if ( tmp == -1)
    {
      puts("yes");
      cout << 1 << " " << 1 << endl;
      exit(0);
    }  
 
  int tmp2 = tmp;
    ans.push_back( v2[tmp]);
  while ( tmp > 0 && v2[tmp] < v2[tmp - 1 ] )
        {
          ans.push_back( v2[tmp-1]);
          tmp--;
        }
      
      sort( ans.begin() , ans.end());
 
 for ( int i = tmp2 - (ans.size()-1) , j = 0; j < ans.size() ; ++i , j++)
      v2[i] = ans[j];
 
  
  for ( int i = 0 ; i < n-1 ; ++i)
  {
    if (v2[i] < v2[i+1])
       continue;
       else{
         puts("no");
         exit(0);
       }
  }
 
  cout << "yes" << endl;
  cout << tmp2 - (ans.size()-1) + 1 << " " << tmp2 + 1 << endl;
 
 
  return 0;
}
