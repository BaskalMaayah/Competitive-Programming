#include <bits/stdc++.h>
 
using namespace std ;
 
bool primes[1000001];
 
vector <int> v;
 
void sieve(){
	memset(primes , true, sizeof primes);
 
	primes[0] = primes[1] = false; 
	
	for(int i = 2; i * i <= 1000000; ++i)
		if(primes[i])
		  	for(int j = i + i; j <= 1000000; j += i)
			   	primes[j] = false;
		
	
	
	for(int i = 0; i <= 1000000; ++i)
		if(primes[i])
			v.push_back(i); 
		
 
}
 
 
int main ()
{
 
    int n;
    long long x , sq;
    //vector < long long > v;
    sieve();
 
    cin >> n;
 
    while( n-- ){
             
             cin >> x;
             sq = sqrt(x) ;
             if ( sq * sq == x && primes[sq] )
               puts("YES");
             else
               puts("NO");
    }
    
 
 
  return 0;
}
