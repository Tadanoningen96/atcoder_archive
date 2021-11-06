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

vector<vector<char>> maze(1005,vector<char>(1005));
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
vector<vector<int>> turn(1005,vector<int>(1005,0));
int h,w,rs,cs,rt,ct;

int bfs(int rs,int cs,int rt,int ct){
	priority_queue<P,vector<P>,greater<P>> que;

	que.push(P(rs,cs));
	turn[rs][cs] = -1;
	while(!que.empty()){
		int sx = que.top().first,sy = que.top().second;
		que.pop();
		if(sx == rt && sy == ct) break;
		for(int i=0;i < 4;i++){
			int nx = sx + dx[i],ny = sy + dy[i];
			if(nx >= 0 && nx < w && ny
		}
	}
}

int main(){
	cin >> h >> w >> rs >> cs >> rt >> ct;
	
	for(int i=0;i < h;i++){
		for(int j=0;j < w;j++){
			cin >> maze[i][j];
		}
	}
	return 0;
}
