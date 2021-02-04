#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n, k;
	cin >> n >> k;
	int a[200001];
 
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}	
 
	sort(a, a + n);
 
	if(k == 0){
		if(a[0] - 1 > 0){
			cout << a[0] - 1 << endl;
		}else{
			cout << -1 << endl;
		}
	}else if(k == n){
		cout << a[k - 1] << endl;
	}else if(a[k] != a[k - 1]){
		cout << a[k - 1] << endl;
	}else{
		cout << -1 << endl;
	}
	return 0;
}
