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
	int n,k;
	cin >> n >> k;

	vector<int> cnt(n+1,0);

	for(int i=2;i <= n;i++){
		if(cnt[i] != 0) continue;

		for(int j=i;j <= n;j += i) cnt[j]++;

	}
	
	int ans = 0;

	for(int i=0;i <= n;i++){
		if(cnt[i] >= k) ans++;
	}

	cout << ans << endl; 
	return 0;
}
