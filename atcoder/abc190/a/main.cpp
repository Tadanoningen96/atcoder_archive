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
	int a,b,c;
	cin >> a >> b >> c;

	if(a > b){
		cout << "Takahashi" << endl;
	}else if(a < b){
		cout << "Aoki" << endl;
	}else{
		if(c == 0) cout << "Aoki" << endl;
		else cout << "Takahashi" << endl;
	}
	return 0;
}