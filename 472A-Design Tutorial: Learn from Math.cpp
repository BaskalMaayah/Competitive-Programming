#include <bits/stdc++.h>
 
using namespace std;
 
bool isPrime(int x)
{
	for(int i = 2; i * i <= x; ++i) 
		if (x % i == 0) return true;
	
	return false;
}
 
int main(){
int n;
cin >> n;
 
    for ( int j=4 ; j < n ; ++j)
      if ( isPrime(j) && isPrime(n-j)){
        cout << j << " " << n-j <<endl;
        return 0;
        }
    
  
}
