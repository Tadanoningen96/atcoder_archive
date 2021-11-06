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
	vector<ll> mod_46a(46,0),mod_46b(46,0),mod_46c(46,0);

	for(int i=0;i < n;i++) {
		cin >> a[i];
		mod_46a[a[i]%46]++;
	}
	
	for(int i=0;i < n;i++){
		cin >> b[i];
		mod_46b[b[i]%46]++;
	}
	
	for(int i=0;i < n;i++){
		cin >> c[i];
		mod_46c[c[i]%46]++;
	}

	ll ans = 0;

	for(int i=0;i < 46;i++){
		if(mod_46a[i] == 0) continue;
		for(int j=0;j < 46;j++){
			if(mod_46b[j] == 0) continue;
			for(int k=0;k < 46;k++){
				if(mod_46c[k] == 0) continue;
				if((i+j+k)%46 == 0){
					ans += mod_46a[i]*mod_46b[j]*mod_46c[k];
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}
