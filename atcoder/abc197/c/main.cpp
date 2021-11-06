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
	int n;
	cin >> n;
	vector<ll> a(n);
	
	for(int i=0;i < n;i++) cin >> a[i];
	
	ll ans = 1LL << 60;	
	for(int bits = 0;bits < (1 << (n-1));bits++){
		ll tmp1 = 0,tmp2 = 0;
		for(int i=0;i <= n;i++){
			if(i < n) tmp2 |= a[i];
			if(i  == n || (bits >> i) & 1) tmp1 ^= tmp2,tmp2 = 0;
		}
		ans = min(ans,tmp1);
	}

	cout << ans << endl;
	return 0;
}
