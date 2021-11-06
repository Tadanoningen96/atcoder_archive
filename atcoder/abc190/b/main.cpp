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
	int n,s,d;
	cin >> n >> s >> d;
	bool ok = false;

	rep(i,n){
		int x,y;
		cin >> x >> y;
		if(x < s && y > d) ok = true;
	}

	if(ok) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}