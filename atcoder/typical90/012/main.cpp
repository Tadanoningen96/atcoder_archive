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

class UnionFind{
	public:
	vector<int> par;

	void init(int n){
		par.resize(n,-1);
	}

	int root(int x){
		if(par[x] == -1) return x;
		par[x] = root(par[x]);
		return par[x];
	}
	void unite(int x,int y){
		x = root(x);y = root(y);
		if(x == y) return;
		par[x] = y;
	}

	bool same(int x,int y){
		return root(x) == root(y);
	}
};

int h,w,q;
UnionFind UF;
vector<vector<bool>> used(2009,vector<bool>(2009,false));

void query1(int a1,int b1){

	int dx[4] = {1,0,-1,0};
	int dy[4] = {0,1,0,-1};
	for(int i=0;i < 4;i++){
		int sx = a1 + dx[i],sy = b1 + dy[i];
		if(used[sx][sy] == false) continue;
		int hash1 = (a1-1)*w + (b1-1);
		int hash2 = (sx-1)*w + (sy-1);
		UF.unite(hash1,hash2);
	}
	used[a1][b1] = true;
}

bool query2(int a1,int b1,int c1,int d1){
	
	if(used[a1][b1] == false || used[c1][d1] == false) return false;
	
	int hash1 = (a1-1)*w + (b1-1);
	int hash2 = (c1-1)*w + (d1-1);

	if(UF.same(hash1,hash2) == true) return true;
	else return false;
}

int main(){
	cin >> h >> w >> q;
	UF.init(h*w);

	while(q--){
		int t;cin >> t;

		if(t == 1){
			int x,y;
			cin >> x >> y;
			query1(x,y);
		}
		if(t == 2){
			int x1,y1,x2,y2;
			cin >> x1 >> y1 >> x2 >> y2;
			bool ans = query2(x1,y1,x2,y2);
			cout << (ans ? "Yes" : "No") << endl;
		}
	}
	return 0;
}
