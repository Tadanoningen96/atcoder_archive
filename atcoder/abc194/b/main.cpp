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
	int n;
	cin >> n;
	
	vector<int> a(n),b(n);
	
	int amin = INT_MAX,bmin = INT_MAX;
	rep(i,n){
		cin >> a[i] >> b[i];
	}

	int ans = INT_MAX;

	rep(i,n){
		rep(j,n){
			if(i == j) chmin(ans,a[i]+b[j]);
			else{
				chmin(ans,max(a[i],b[j]));
			}	
		}
	}

	cout << ans << endl;

	return 0;
}
