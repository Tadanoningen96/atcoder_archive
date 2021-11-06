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
	int n;vector<int> a;
	cin >> n;a.resize(n);

	for(auto &x: a) cin >> x;
	
	int ans = 0;
	for(int i=0;i < n;i++){
		if(a[i] <= 10) continue;
		else ans += a[i] - 10;
	}

	cout << ans << endl;
	return 0;
}
