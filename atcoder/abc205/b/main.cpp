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
	vector<int> a(n);
	for(auto &x: a) cin >> x;

	sort(a.begin(),a.end());
	
	bool ok = true;

	for(int i=0;i < n;i++){
		if(a[i] != i+1) ok = false;
	}

	cout << (ok ? "Yes" : "No") << endl;
	return 0;
}
