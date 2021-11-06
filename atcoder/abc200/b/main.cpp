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
	ll  n,k;
	cin >> n >> k;
	
	for(int i=0;i < k;i++){
		if(n % 200 == 0) n /= 200;
		else{
			n = n * 1000 + 200;
		}
	}

	cout << n << endl;	
	return 0;
}
