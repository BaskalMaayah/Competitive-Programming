#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
  int n, winner;
  bool possible = true, Bob_Alex=false, Carl_ALex=false, Carl_Bob=false;
 
  cin >> n;
  cin >> winner;
  if ( winner == 3){
    puts("NO");
    return 0;
  }
  if (winner == 1)
    Carl_ALex=true;
  else
    Carl_Bob=true;
 
    for ( int i = 1 ; i < n ; ++i){
      cin >> winner;
      if ( winner == 1){
        if (Carl_Bob==true){
          possible=false;
          break;
        }
        if (Carl_ALex==true){
          Bob_Alex=true;
          Carl_ALex=false;
          Carl_Bob=false;
        }
      else if (Bob_Alex==true){
          Bob_Alex=false;
          Carl_ALex=true;
          Carl_Bob=false;
        }
      }
 
      if ( winner == 2){
        if (Carl_ALex==true){
          possible=false;
          break;
        }
        if (Bob_Alex==true){
          Bob_Alex=false;
          Carl_ALex=false;
          Carl_Bob=true;
        }
     else if (Carl_Bob==true){
          Bob_Alex=true;
          Carl_ALex=false;
          Carl_Bob=false;
        }        
      }
 
      if ( winner == 3){
        if (Bob_Alex==true){
          possible=false;
          break;
        }
        if (Carl_ALex==true){
          Bob_Alex=false;
          Carl_ALex=false;
          Carl_Bob=true;
        }
        else if (Carl_Bob==true){
          Bob_Alex=false;
          Carl_ALex=true;
          Carl_Bob=false;
        }
 
      }
    }
 
    if (possible)
      puts("YES");
    else
      puts("NO");
 
}
