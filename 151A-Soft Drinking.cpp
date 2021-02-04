#include <bits/stdc++.h> 
using namespace std;int main(){int n,k,l,c,d,p,nl,np;cin >>n>>k>>l>>c>>d>>p>>nl>>np;int res=min(k*l/nl,c*d);cout<<min(res,p/np)/n<<endl;}
