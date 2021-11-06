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
	string x;ll M;
	cin >> x >> M;

	if(x.size() == 1){
		if(stoi(x) <= M) cout << 1 << endl;
		else cout << 0 << endl;
		return 0;
	}

	int max_n = 0;
	for(char c: x){
		max_n = max(max_n,int(c - '0'));
	}

	ll left = max_n,right = M+1;
	while(right - left > 1){
		ll mid = (left + right) /2;
		ll v = 0;
		for(char c: x){
			if(v > M/mid) v = M+1;
			else v = v*mid + (c-'0');
		}
		if(v <= M) left = mid;
		else right = mid;
	}
	cout << left - max_n << endl;
	return 0;
}