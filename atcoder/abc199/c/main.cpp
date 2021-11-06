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

void swap(char &s1,char &s2){
	char tmp = s2;
	s2 = s1;
	s1 = tmp;
}

int main(){
	int n,q;string s;
	cin >> n >> s >> q;
	bool flag = false;
	while(q--){
		int t,a,b;
		cin >> t >> a >> b;
		if(t == 1){
			a--;b--;
			if(flag){
				if(a < n && b >= n){
					swap(s[a+n],s[b-n]);
				}else if(a >= n && b < n){
					swap(s[a-n],s[b+n]);
				}else if(a < n && b < n){
					swap(s[a+n],s[b+n]);
				}else if(a >= n && b >= n){
					swap(s[a-n],s[b-n]);
				}
			}else{
				swap(s[a],s[b]);
			}
		}else{
			flag = !flag;
		}
	}

	if(flag){
		string str1 = s.substr(0,n);
		string str2 = s.substr(n,n);
		s = str2 + str1;
	}

	cout << s << endl;	
	return 0;
}
