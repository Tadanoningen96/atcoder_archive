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
	vector<ll> a;
	cin >> n;
	a.resize(n);
	
	for(int i=0;i < n;i++) cin >> a[i];

	map<ll,ll> mod_cnt;

	for(int i=0;i < n;i++){
		mod_cnt[a[i] % 200]++;
	}

	ll ans = 0;

	for(auto cnt : mod_cnt){
		ll m = cnt.second*(cnt.second-1);
		ans += m / 2;
	}

	cout << ans << endl;	
	return 0;
}
