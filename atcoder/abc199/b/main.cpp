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
	vector<int> a,b;
	cin >> n;
	a.resize(n);b.resize(n);

	for(auto &x: a) cin >> x;
	for(auto &x: b) cin >> x;

	vector<int> m(1005,0);

	for(int i=0;i < n;i++){
		for(int A=a[i];A <= b[i];A++) m[A]++;
	}
	
	int ans = 0;

	for(int i=1;i <= 1000;i++){
		if(m[i] == n) ans++;
	}

	cout << ans << endl;	
	return 0;
}
