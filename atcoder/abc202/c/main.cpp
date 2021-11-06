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
	ll n;
	vector<ll> a,b,c;

	cin >> n;
	a.resize(n);b.resize(n);c.resize(n);

	for(auto &x: a) cin >> x;
	for(auto &x: b) cin >> x;
	for(auto &x: c) {
		cin >> x;
		x--;
	}

	map<ll,ll> a_cnt;

	for(int i=0;i < n;i++) a_cnt[a[i]]++;
	
	ll ans = 0;
	for(int i=0;i < n;i++){
		ans += a_cnt[b[c[i]]];
	}

	cout << ans << endl;
	return 0;
}
