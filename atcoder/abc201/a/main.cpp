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
	vector<int> a(3);
	cin >> a[0] >> a[1] >> a[2];
	
	sort(a.begin(),a.end());

	if(a[0] + a[2] == 2*a[1]) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
