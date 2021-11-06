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
	ll a,b,c;
	cin >> a >> b >> c;

	if(a >= 0 && b >= 0){
		if(a < b) cout << "<" << endl;
		else if(a == b) cout << "=" << endl;
		else cout << ">" << endl;
	}else if(a >= 0 && b < 0){
		if(c % 2 == 0){
			if(a < abs(b)) cout << "<" << endl;
			else if(a == abs(b)) cout << "=" << endl;
			else cout << ">" << endl;
		}else{
			cout << ">" << endl;
		}
	}else if(a < 0 && b >= 0){
		if(c % 2 == 0){
			if(abs(a) < b) cout << "<" << endl;
			else if(abs(a) == b) cout << "=" << endl;
			else cout << ">" << endl;
		}else cout << "<" << endl;
	}else{
		if(a == b) cout << "=" << endl;
		else{
			if(a < b){
				if(c % 2 == 0) cout << "<" << endl;
				else cout << ">" << endl;
			}else{
				if(c % 2 == 0) cout << ">" << endl;
				else cout << "<" << endl;
			}
		}
	}
	return 0;
}
