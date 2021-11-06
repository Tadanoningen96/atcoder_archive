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

ll modpow(ll x,ll n,ll mod){
	ll res = 1;
	while(n > 0){
		if(n & 1){
			res = res * x % mod;
		}
		x = x * x % mod;
		n >>= 1;
	}

	return res;
}

int main(){
	ll a,b,c;
	cin >> a >> b >> c;

	ll d;

	if(b % 4 == 2 && c % 2 == 1){
		if(c == 1){
			d = 2;
		}else d = 0;
	}else{
		d = modpow(b,c,4);
	}

	d = (d != 0) ? d : 4;

	ll ans = modpow(a,d,10);


	cout << ans << endl;

	return 0;
}