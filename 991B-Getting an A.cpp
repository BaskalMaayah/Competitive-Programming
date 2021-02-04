
#include <bits/stdc++.h>
 
using namespace std ;
 
int main (){
 
 int a[102];
 int t;
 double avg = 0, value = 0;
   scanf("%d" , &t);
 
   for (int i = 0 ; i < t; ++i)
   {
      scanf("%d" , &a[i]);
      avg += a[i];
   }
 
   avg = avg / t ;
 
   sort ( a , a+t);
 
   if ( avg >= 4.5)
    {
         puts("0");
         exit(0);
    }
      
  value = ( 4.5-avg)*t;
  //cout << value << endl;
  int cnt = 0;
  for ( int i = 0 ; i < t ; ++i)
  {
    if ( a[i] == 5) break;
    
      value = value -(5 - a[i]);
      cnt++;
      if ( value < 0.1) break;
  }
 
  cout << cnt << endl;
 
  return 0;
 
}
