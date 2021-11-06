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

vector<int> G[2020];

void judge(int a,int b,vector<bool> &seen){
	seen[a] = true;

	for(int u: G[a]){
		if(!seen[u]) judge(u,b,seen);
	}
}

int main(){
	int n,m;
	cin >> n >> m;

	for(int i=0;i < m;i++){
		int a,b;
		cin >> a >> b;
		a--;b--;
		G[a].push_back(b);
	}

	int ans = 0;
	for(int i=0;i < n;i++){
		vector<bool> seen(2020,false);
		for(int j=0;j < n;j++){
			judge(i,j,seen);
			if(seen[i] == true && seen[j] == true){
				ans++;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
