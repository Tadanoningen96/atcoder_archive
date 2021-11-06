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
	bool rev = false;
	string t = "";
	for(int i=0;i < (int)s.size();i++){
		if(s[i] == 'R') rev = !rev;
		else{
			if(rev){
				if(s[i] != t[0])
				else t.erase(t.begin());
			}else{
				if(s[i] != t[t.size()-1]) t = t + s[i];
				else t.erase(t.end()-1);
			}
		}
	}

	if(rev) reverse(t.begin(),t.end());	
	cout << t << endl;
	return 0;
}
