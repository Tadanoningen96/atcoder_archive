#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i) < (n);(i)++)


using namespace std;
using ll = long long;
using ld = long double;

template<typename T>
bool chmax(T &a,const T &b) {if(a < b) {a = b;return true;}return false;}
template<typename T>
bool chmin(T &a,const T &b) {if(a > b) {a = b;return true;}return false;}

int main(){
	cout << fixed << setprecision(20);
	int a,b;
	cin >> a >> b;

	ld ans = (ld)(a-b)/(ld)a;
	ans *= 100;
	cout << ans << endl;
	return 0;
}

