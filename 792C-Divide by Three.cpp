#include <bits/stdc++.h>
 
using namespace std ;
 
string s;
const int inf = 1e9;
int dp[100001][3][2];
 
int calc ( int i , int mod , bool can)
{
    if ( i == s.size())  
      return  ( mod == 0 ) ? 0 : inf ;
 
  int &ret = dp[i][mod][can];
 
   if ( ret != -1) 
        return ret;
 
        ret = 1 + calc ( i+1 , mod , can);
 
      if ( s[i] == '0' ){
            if (can){
             ret = min ( ret , calc (i+1 , (mod*10 + (s[i] - '0') ) %3 , 1) );
             }
      }
      else 
             {ret = min ( ret , calc (i+1 , (mod*10 + (s[i] - '0') ) %3 , 1) );}
 
           
 
      return ret;
     
}
 
string ans = "";
void MyAns  ( int i , int mod , bool can)
{
  if ( i == s.size())  return ;
 
  if ( 1+calc ( i + 1 , mod , can) == calc ( i , mod , can)){
    MyAns ( i+1 , mod , can );
    return ;
  }
 
  if ( s[i] == '0' ){
    if ( can && calc ( i + 1 , (mod*10 + (s[i] - '0'))%3 , 1) == calc ( i , mod , can)){
        ans += s[i];
        MyAns ( i+1 , (mod*10 + (s[i] - '0'))%3 , 1 );
        return ;
    }
  }
  else
  {
    if ( calc ( i + 1 , (mod*10 + (s[i] - '0'))%3 , 1) == calc ( i , mod , can))
    ans += s[i];
    MyAns ( i+1 , (mod*10 + (s[i] - '0'))%3 , 1 );
    return ;
  }
}
 
 
int main ()
{
  
  memset ( dp , -1 , sizeof dp);
  cin >> s;

  if ( calc ( 0 , 0 , 0) == s.size()){

  for ( int i = 0 ; i < s.size() ; ++i){
    if ( s[i] == '0'){
     puts ( "0");
     exit(0) ;}
  }
  puts("-1");
  exit(0) ; 
 
  }
 
  MyAns( 0 , 0 , 0);
  cout << ans <<  endl;
 
 
  return 0;
 
}
