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
	int n,k;
	cin >> n >> k;

	vector<vector<ll>> a(n,vector<ll>(n));
	for(int i=0;i < n;i++){
		for(int j=0;j < n;j++){
			cin >> a[i][j];
		}
	}
	ll ans = 0;
	for(int i=k-1;i < n;i++){
		for(int j=k-1;j < n;j++){
			for(int a=0;a <= i;a++){
				for(int b=0;b <= j;b++){
					
				}
			}
		}
	}
	return 0;
}
