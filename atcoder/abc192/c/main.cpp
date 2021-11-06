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
	ll n,k;
	cin >> n >> k;

	ll a = n;
	for(int i=0;i < k;i++){
		string s1 = to_string(a);
		string s2 = to_string(a);
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end(),greater<char>());
		if(s2[0] == '0'){
			ll idx = 0;
			while(s2[idx] == '0') idx++;
			s2 = s2.substr(idx);
		}
		ll n1 = stoll(s1),n2 = stoll(s2);
		a = n2 - n1;
		if(a == 0) break;
 	}

 	cout << a << endl;
	return 0;
}