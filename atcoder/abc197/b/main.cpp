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
	int h,w,x,y;
	cin >> h >> w >> x >> y;
	x--;y--;
	string s[h];
	
	for(int i=0;i < h;i++) cin >> s[i];
		
	int ans = 1;
	
	for(int i=x-1;i >= 0 && i < h && s[i][y] == '.';i--) ans++;
	for(int i=x+1;i >= 0 && i < h && s[i][y] == '.';i++) ans++;
	for(int i=y-1;i >= 0 && i < w && s[x][i] == '.';i--) ans++;
	for(int i=y+1;i >= 0 && i < w && s[x][i] == '.';i++) ans++;
	
	cout << ans << endl;	
	return 0;
}
