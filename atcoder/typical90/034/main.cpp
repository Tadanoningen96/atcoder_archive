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
	ll n,k;
	cin >> n >> k;
	vector<ll> a(n);
	for(auto &x: a) cin >> x;

	map<ll,ll> map;

	ll ans = 0,cr = 0;
	ll cnt = 0;
	for(ll i=0;i < n;i++){
		while(cr < n){
			if(cnt == k && map[a[cr]] == 0) break; 
			if(map[a[cr]] == 0) cnt++;
			map[a[cr]]++;
			cr++;
		}
		ans = max(ans,cr - i);
		if(map[a[i]] == 1) cnt--;
		map[a[i]]--;
	}

	cout << ans << endl;
	return 0;
}
