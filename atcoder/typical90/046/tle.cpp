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
	vector<ll> a(n),b(n),c(n);

	for(int i=0;i < n;i++) cin >> a[i];	
	for(int i=0;i < n;i++) cin >> b[i];	
	for(int i=0;i < n;i++) cin >> c[i];

	ll ans = 0;

	for(int i=0;i < n;i++){
		for(int j=0;j < n;j++){
			for(int k=0;k < n;k++){
				ll s = (a[i] + b[j] + c[k]) % 46LL;
				if(s == 0) ans++;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
