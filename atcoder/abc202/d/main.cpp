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
	int a,b;ll k;
	cin >> a >> b >> k;

	vector<vector<ll>> c(61,vector<ll>(61,0));

	c[0][0] = 1;

	for(int i=0;i < 60;i++){
		for(int j=0;j < i+1;j++){
			c[i+1][j] += c[i][j];
			c[i+1][j+1] += c[i][j];
		}
	}

	string ans = "";

	while(a+b > 0){
		ll x = 0;
		if(a >= 1) x = c[a+b-1][a-1];
		if(k <= x){
			ans += 'a';
			a--;
		}else{
			ans += 'b';
			b--;
			k -= x;
		}
	}

	cout << ans << endl;
	return 0;
}
