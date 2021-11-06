#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i) < (n);(i)++)
#define rep2(i,m,n) for(int (i)=(m);(i) < (n);(i)++)


using namespace std;
using ll = long long;
using ld = long double;
using P = pair<ll,ll>;

template<typename T>
bool chmax(T &a,const T &b) {if(a < b) {a = b;return true;}return false;}
template<typename T>
bool chmin(T &a,const T &b) {if(a > b) {a = b;return true;}return false;}

int main(){
	ll n,k;
	vector<P> p;
	cin >> n >> k;
	p.resize(n);

	for(int i=0;i < n;i++) cin >> p[i].first >> p[i].second;
	
	sort(p.begin(),p.end());
	ll ans = 0,prev = 0;

	for(int i=0;i < n;i++){
		ll dist = p[i].first - prev;
		k -= dist;
		ans += dist;
		if(k < 0) break;
		prev = p[i].first;
		k += p[i].second;
	}

	ans += k;

	cout << ans << endl;
	return 0;
}
