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
	string s;
	cin >> s;

	int n = s.size();
	bool ok = true;
	for(int i=0;i < n;i++){
		if(i % 2 == 0 && (s[i] >= 'A' && s[i] <= 'Z')){
			ok = false;
			break;
		}
		if(i % 2 == 1 && (s[i] >= 'a' && s[i] <= 'z')){
			ok = false;
			break;
		}
	}

	if(ok) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}