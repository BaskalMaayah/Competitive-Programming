#include <bits/stdc++.h>
 
using namespace std ;
 
int main ()
{
  int n;
  string s = "";
  scanf("%d" , &n);
  
  if ( n == 1)
  {
    puts("a");
    exit(0);
  }
  if ( n == 2)
  {
    puts("aa");
    exit(0);
  }
 
   int i;
    for ( i = 0 ; i < n/2 ; ++i)
    if (i%2 == 0)
    s += "aa";
    else
    s += "bb";
 
 
  if ( n % 2 != 0)
  {
    if ( i%2 == 0)
    s += "a";
    else
    s += "b";
  }
 
  cout << s << endl;
  return 0;
}
