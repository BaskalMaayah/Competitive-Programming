#include <bits/stdc++.h>
 
using namespace std;
 
int main ()
{
int n;
	cin >> n;
	string s;
	cin >> s;
 
	set<string> st;
	map<string, int> mp;
 
	for(int i = 1; i < s.size(); ++i){
		string tmp = s.substr(i - 1, 2);
		st.insert(tmp);
		mp[tmp]++;
	}
 
	int mx = 0;
 
	set<string>::iterator it;
	string ans = "";
	for(it = st.begin(); it != st.end(); it++){
		if(mx < mp[*it]){
			mx = mp[*it];
			ans = *it;
		}
	}
 
	cout << ans << endl;
}
