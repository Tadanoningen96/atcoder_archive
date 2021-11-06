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

bool f(ll x,vector<ll> &vec,ll l,ll k){
	ll cut = 0,cnt = 0;

	for(int i=0;i < (int)vec.size();i++){
		if(vec[i] - cut >= x && l - vec[i] >= x){
			cut = vec[i];
			cnt++;
		}
	}

	if(cnt >= k) return true;
	return false;

}

int main(){
	ll n,l,k;
	cin >> n >> l >> k;
	vector<ll> a(n);
	for(auto &x: a) cin >> x;

	ll left = -1,right = l+1;

	while(right - left > 1){
		ll mid = (right + left) / 2;
		if(f(mid,a,l,k)){
			left = mid;
		}else{
			right = mid;
		}
	}

	cout << left << endl;
	return 0;
}
