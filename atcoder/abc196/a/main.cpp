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
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int ans = INT_MIN;
	for(int x=a;x <= b;x++){
		for(int y=c;y <= d;y++){
		chmax(ans,x-y);
		}
	}

	cout << ans << endl;
	return 0;
}
