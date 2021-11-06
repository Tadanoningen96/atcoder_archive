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

	int size = s.size();

	for(int i=0;i < size;i++){
		if(s[i] == '6') s[i] = '9';
		else if(s[i] == '9') s[i] = '6';
	}

	reverse(s.begin(),s.end());

	cout << s << endl;
	return 0;
}
