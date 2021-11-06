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
	int ans = 0;
	for(int i=1;i <= n;i++){
		for(int j=1;j <= k;j++){
			ans += 100*i + j;
		}
	}

	cout << ans << endl;
	return 0;
}
