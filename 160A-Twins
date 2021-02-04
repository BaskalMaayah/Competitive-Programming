#include <bits/stdc++.h>
 
using namespace std ;
vector <int> coins;
 
int main ()
{
 
  int x , sum , sub , total = 0 , cnt = 0;
  scanf("%d" , &x);
  coins.resize(x);
  for ( int i = 0 ; i < x ; ++i)
  {
    scanf("%d" , &coins[i]);
    total += coins[i];
    //cout << total << endl;;
  }
  sort( coins.begin() , coins.end());
 
  sum = coins[coins.size()-1];
  sub = total - sum;
   // cout <<sub;
 
  for ( int i = coins.size()-2 ; i >= 0 ; --i)
  {
    if ( sub >= sum)
    {
      sum += coins[i];
      sub -= coins[i];
      cnt++;
    } 
 
    else 
    break;
  }
   printf("%d" , cnt+1);
   return 0;
}
