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
	int n,q;
	cin >> n >> q;

	vector<int> a(n);
	for(auto &x: a) cin >> x;
	
	int shift = 0;

	while(q--){
		int t,x,y;
		cin >> t >> x >> y;
		if(t == 1){
			x--;y--;
			x -= shift;y -= shift;
			if(x < 0) x += n;
			if(y < 0) y += n;
			int tmp = a[x];
			a[x] = a[y];
			a[y] = tmp;
		}else if(t == 2){
			shift = shift + 1;
			shift %= n;
		}else{
			x--;
			x -= shift;
			if(x < 0) x += n;
			cout << a[x] << endl;
		}
	}
	return 0;
}
