#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i) < (n);(i)++)
#define rep2(i,m,n) for(int (i)=(m);(i) < (n);(i)++)


using namespace std;
using ll = long long;
using ld = long double;

template<typename T>
bool chmax(T &a,const T &b) {if(a < b) {a = b;return true;}return false;}
template<typename T>
bool chmin(T &a,const T &b) {if(a > b) {a = b;return true;}return false;}

int main(){
	int n,m,q;
	cin >> n >> m >> q;

	vector<int> w(n),v(n);
	for(int i = 0;i < n;i++){
		cin >> w[i] >>> v[i];
	}
	vector<int> x(m);

	for(auto &a : x) cin >> a;

	while(q--){
		int l,r;
		cin >> l >> r;
	}	
	return 0;
}
