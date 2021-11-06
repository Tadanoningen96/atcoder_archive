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

ll func(ll n){
	return n*(n+1)/2;
}

int main(){
	int n;
	cin >> n;

	rep(i,n){
		ll l,r;
		cin >> l >> r;

		ll ans = (r-2*l+1 > 0) ? func(r-2*l+1) : 0;

		cout << ans << endl;
	}
	return 0;
}