#include <bits/stdc++.h>
 
using namespace std ;
 
int main ()
{
  bool bigger;
  string sol = "";
  int zeros , ones , diff;
  scanf("%d %d %d" , &zeros ,&ones ,&diff);
  
  if ( zeros > ones) { bigger = true; sol +="0"; zeros--;}
  else { bigger = false; sol += "1"; ones--;}
  bigger = !bigger;
  diff--;
 
  while ( diff--)
  {
    if (bigger)
    {
      sol += "0";
      bigger = !bigger;
      zeros--;
    }
    else
    {
      sol +="1";
      bigger = !bigger;
      ones--;
    }
  }
   cout << sol ;
  if ( !bigger )
  {
    while ( zeros--)
    cout << "0";
    while ( ones--)
    cout << "1";
  }
  else{
    while ( ones-- )
      cout << "1";
      while ( zeros--)
      cout << "0";
  }
 
  return 0;
 
 
 
}
