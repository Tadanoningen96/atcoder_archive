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
	int a,b;
	cin >> a >> b;

	if(a+b >= 15 && b >= 8) cout << 1 << endl;
	else if(a+b >= 10 && b >= 3) cout << 2 << endl;
	else if(a+b >= 3) cout << 3 << endl;
	else cout << 4 << endl;
	return 0;
}
