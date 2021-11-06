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
	
	int ans = 0;

	for(int num=0;num <= 9999;num++){
		vector<bool> flag(10);
		int n = num;
		for(int i=0;i < 4;i++){
			flag[n%10] = true;
			n /= 10;
		}
		
		bool flag2 = true;

		for(int j=0;j < 10;j++){
			if(s[j] == 'o' && !flag[j]) flag2 = false;
			if(s[j] == 'x' && flag[j]) flag2 = false;
		}

		ans += flag2;
	}

	cout << ans << endl;
	return 0;
}
