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
	cin >> n >> k;
	vector<P> p(n);
	for(int i = 0;i < n;i++) cin >> p[i].first >> p[i].second;
	sort(p.begin(),p.end());

	ll sum = 0,ans = 0;
	for(int i=0;i < n;i++){
		sum += p[i].second;
		if(sum >= k){
			ans = p[i].first;
			break;
		}
	}

	cout << ans << endl;
	return 0;
}
