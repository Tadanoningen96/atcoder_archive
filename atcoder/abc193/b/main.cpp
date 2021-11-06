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



	int ans = INT_MAX;
	rep(i,n){
		int a,p,x;
		cin >> a >> p >> x;
		if(a >= x) continue;
		else{
			chmin(ans,p);
		}
	}

	if(ans == INT_MAX) cout << -1 << endl;
	else cout << ans << endl;
	return 0;
}