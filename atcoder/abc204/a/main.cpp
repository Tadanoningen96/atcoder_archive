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
	int x,y;
	cin >> x >> y;

	if(x > y) swap(x,y);
	if(x != y){
		if(x == 0 && y == 1) cout << 2 << endl;
		else if(x == 0 && y == 2) cout << 1 << endl;
		else if(x == 1 && y == 2) cout << 0 << endl;
	}else{
		cout << x << endl;
	}
	
	return 0;
}
