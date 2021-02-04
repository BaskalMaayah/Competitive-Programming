#include <bits/stdc++.h>
 
using namespace std ;
 
int main(){
 
 int n , m;
 scanf("%d" , &n);
 vector <int> v(n);
 
	for (int i = 0 ; i < n ; ++i)
		scanf("%d" , &v[i]);
 
 
	int pos = -1;
	bool yes = true;
 
	for (int i = 1; i < n; i++){
		if (v[i] < v[i - 1]){
			if (pos >= 0){
				yes = false;
				break;
			}
			else
				pos = i;
		}
	}
 
	if (pos == -1)
		cout << 0 << endl;
 
	else if (!yes)
		cout << -1 << endl;
 
	else if (v[n - 1] <= v[0])
		cout << n - pos << endl;
 
	else
		cout << -1 << endl;
 
	return 0;
}
 
