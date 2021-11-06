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
template<typename T>
bool is_integer(T x){
	return x == floor(x);
}

int main(){
	int a,b,w;
	cin >> a >> b >> w;
	
	w = w*1000;
	
	int n = (w+b-1)/b,N = w / a;
	
	if(N - n >= 0) cout << n << " " << N << endl;
	else cout << "UNSATISFIABLE" << endl;
	return 0;
}
