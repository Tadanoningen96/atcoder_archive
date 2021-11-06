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

constexpr ll INF = (ll)1e9 + 7LL;

int main(){
	int n;string s;
	cin >> n >> s;
	vector<vector<ll>> dp(n+1,vector<ll>(8,0));

	dp[0][0] = 1;
	
	for(int i=0;i < n;i++){
		for(int j=0;j <= 7;j++){
			dp[i+1][j] += dp[i][j];	
			if(s[i] == 'a' && j == 0) dp[i+1][j+1] += dp[i][j];
			if(s[i] == 't' && j == 1) dp[i+1][j+1] += dp[i][j];
			if(s[i] == 'c' && j == 2) dp[i+1][j+1] += dp[i][j];
			if(s[i] == 'o' && j == 3) dp[i+1][j+1] += dp[i][j];
			if(s[i] == 'd' && j == 4) dp[i+1][j+1] += dp[i][j];
			if(s[i] == 'e' && j == 5) dp[i+1][j+1] += dp[i][j];
			if(s[i] == 'r' && j == 6) dp[i+1][j+1] += dp[i][j];
		}
		for(int j=0;j <= 7;j++) dp[i+1][j] %= INF;
	}
	cout << dp[n][7] << endl;
	return 0;
}
