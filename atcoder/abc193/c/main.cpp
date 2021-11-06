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

ll pow(ll x,ll n){
	ll res = 1;
	while(n > 0){
		if(n & 1) res = res * x;
		x = x*x;
		n >>= 1;
	}
	return res;
}

bool is_prime(ll n){
	if(n == 0 || n == 1) return false;
	else if(n == 2 || n == 3 || n == 5) return true;
	else if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0) return false;
	else{
		for(ll i=7;i * i <= n;i+=2){
			if(n % i == 0) return false;
		}
	}
	return false;
}

int main(){
	ll n;
	cin >> n;

	set<ll> s;

	for(ll a=2;a * a <= n;a++){
		ll x = a*a;
		while(x <= n){
			s.insert(x);
			x *= a;
		}
	}

	ll ans = n - s.size();

	cout << ans << endl;
	return 0;
}