#include <bits/stdc++.h>

using namespace std ;

int main(){

int n , m ;
cin >> n >> m;
bool yet = false;

int twos = n/2;
int ones = n%2;

/*if ( twos == 0 && ones%m != 0)
  cout << -1 << endl;*/

if ( (twos+ones)% m == 0)
  cout << (twos+ones) << endl;


else if ((twos+ones)% m != 0){
  //cout << 123 << endl;
  while ( !yet && twos != 0){
    twos--;
    ones += 2;
     // cout << twos << " " << ones << endl;
    if ((twos+ones)% m == 0)
       yet = !yet;
    }
    if ( yet)
    cout << twos+ones << endl;
    else
    cout << -1 << endl;
}
else
  cout << -1 << endl;

  
}
