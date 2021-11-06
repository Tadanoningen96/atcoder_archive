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
	cout << fixed << setprecision(15);
	int n;
	double d,h;
	cin >> n >> d >> h;
	double max_h = 0,min_d = d+1;

	vector<double> di(n),hi(n);
	
	for(int i=0;i < n;i++){
		cin >> di[i] >> hi[i];
	}
	double ans = h + 1;
	for(int i=0;i < n;i++){
		double grad = (h - hi[i])/(d - di[i]);
		double res = -grad*di[i] + hi[i];
		bool flag = true;

		for(int j=0;j < n;j++){
			if(i == j) continue;
			if(hi[j] > grad*di[j] + res) flag = false;
		}
		if(flag) {
			ans = min(ans,res);
			ans = max<double>(ans,0);
		} 
	}

	cout << ans << endl;
	return 0;
}
