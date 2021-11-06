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
	ll n,q;
	cin >> n >> q;
	vector<ll> a(n);
	for(auto &x: a) cin >> x;

	while(q--){
		ll k;
		cin >> k;

		const int idx = lower_boundbegin(),a.end(),k) - a.begin() + 1;

		if(idx < k) cout << a[n-1] + (k - cn) << endl;
		else{
			const i = lowerbound
		}
	}
	return 0;
}
