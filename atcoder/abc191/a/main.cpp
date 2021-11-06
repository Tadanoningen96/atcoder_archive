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
	int v,t,s,d;
	cin >> v >> t >> s >> d;

	int d1 = v*t,d2 = v*s;

	if(d >= d1 && d <= d2) cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}