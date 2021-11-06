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
		if(n & 1){
			res = res*x;
		}
		x = x*x;
		n >>= 1;
	}
	return res;
}

int main(){
	ll n;
	cin >> n;
	
	if(n < 1000){
		cout << 0 << endl;
		return 0;
	}

	ll tmp = n;
	int digits = 0;

	while(tmp > 0){
		tmp /= 10;
		digits++;
	}
	digits--;
	ll ans = 0;

	if(n >= pow(10,6)) ans += pow(10,6)-pow(10,3);
	if(n >= pow(10,9)) ans += 2*(pow(10,9)-pow(10,6));
	if(n >= pow(10,12)) ans += 3*(pow(10,12)-pow(10,9));
	if(n >= pow(10,15)) ans += 4*(pow(10,15)-pow(10,12));

	ans += (digits / 3) * (n - pow(10,3*(digits/3)) + 1);

	cout << ans << endl;
	return 0;
}
