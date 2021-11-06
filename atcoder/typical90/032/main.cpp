#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i) < (n);(i)++)
#define rep2(i,m,n) for(int (i)=(m);(i) < (n);(i)++)


using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int,int>;

template<typename T>
bool chmax(T &a,const T &b) {if(a < b) {a = b;return true;}return false;}
template<typename T>
bool chmin(T &a,const T &b) {if(a > b) {a = b;return true;}return false;}

int main(){
	int n;
	cin >> n;
	vector<vector<int>> a(n,vector<int>(n));
	for(int i=0;i < n;i++){
		for(int j=0;j < n;j++){
			cin >> a[i][j];
		}
	}
	
	int m;cin >> m;
	vector<vector<bool>> gossip(n,vector<bool>(n,false));
	for(int i=0;i < m;i++){
		int x,y;cin >> x >> y;
		x--;y--;
		gossip[x][y] = true;
		gossip[y][x] = true;
	}

	vector<int> perm(n);
	for(int i=0;i < n;i++) perm[i] = i;
	

	int ans = INT_MAX;
	do{
		bool ok = true;
		int time = 0;
		time += a[perm[0]][0];
		for(int i=1;i < n;i++){
			if(gossip[perm[i-1]][perm[i]]) ok = false;
			if(!ok) break;
			time += a[perm[i]][i];
		}
		if(ok) ans = min(ans,time);
	}while(next_permutation(perm.begin(),perm.end()));

	if(ans != INT_MAX) cout << ans << endl;
	else cout << -1 << endl;
	return 0;
}
