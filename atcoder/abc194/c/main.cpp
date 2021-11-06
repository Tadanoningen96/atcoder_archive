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
	ll n;
	cin >> n;
	
	vector<ll> a(n),asum(n+1,0);
	ll sum = 0;
	rep(i,n){
		cin >> a[i];
	}
	
	rep(i,n){
		asum[i+1] = asum[i] + a[i];
	}

	for(int i=0;i < n;i++){
		sum += (n-1)*a[i]*a[i];
	}


	for(int i=1;i < n;i++){
		sum -= 2*a[i]*asum[i];
	}

	cout << sum << endl;
	return 0;
}
