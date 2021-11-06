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
	ll k;
	cin >> k;
	
	ll ans = 0;

	for(ll a=1;a <= k;a++){
		for(ll b=1;;b++){
			if(a*b > k) break;
			for(ll c=1;;c++){
				if(a*b*c > k) break;
				if(a*b*c <= k) ans++;

			}
		}
	}

	cout << ans << endl;
	
	return 0;
}