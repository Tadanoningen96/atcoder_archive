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
	
	while(q--){
		int t,x,y;
		cin >> t >> x >> y;
		if(t == 1){
			x--;y--;
			int tmp = a[x];
			a[x] = a[y];
			a[y] = tmp;
		}else if(t == 2){
			int tmp = a[n-1];
			for(int i = n-2;i >= 0;i--){
				a[i+1] = a[i];
			}
			a[0] = tmp;	
		}else{
			x--;
			cout << a[x] << endl;
		}
	}
	return 0;
}
