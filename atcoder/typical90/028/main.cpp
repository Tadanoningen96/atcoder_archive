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
	vector<vector<int>> sum(1001,vector<int>(1001,0));

	for(int i=0;i < n;i++){
		int lx,ly,rx,ry;
		cin >> lx >> ly >> rx >> ry;

		sum[lx][ly]++;sum[rx][ry]++;
		sum[lx][ry]--;sum[rx][ly]--;
	}

	for(int i=0;i < 1001;i++){
		for(int j = 1;j < 1001;j++){
			sum[i][j] = sum[i][j] + sum[i][j-1];
		}
	}

	for(int i=1;i < 1001;i++){
		for(int j = 0;j < 1001;j++){
			sum[i][j] = sum[i][j] + sum[i-1][j];
		}
	}

	vector<int> ans(1<<18,0);

	for(int i=0;i < 1001;i++){
		for(int j = 0;j < 1001;j++){
			if(sum[i][j] >= 1) ans[sum[i][j]]++;
		}
	}

	for(int i=1;i <= n;i++){
		cout << ans[i] << endl;
	}
	return 0;
}
