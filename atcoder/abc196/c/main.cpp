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
	ll n;
	cin >> n;

	for(int i=1;;i++){
		if(stoll(to_string(i) + to_string(i)) > n){
			cout << i-1 << endl;
			break;
		}
	}
	
	return 0;
}
