#include<iostream>
#include<queue>
#include<vector>
#include<cmath>
#define INF 1000000007
#define rep(i,n) for(int (i)=0;(i) < (n);(i)++)
#define rep2(i,m,n) for(int (i)=(m);(i) < (n);(i)++)


using namespace std;
using ll = long long;
using ld = long double;
using P = pair<ll,ll>;

template<typename T>
bool chmax(T &a,const T &b) {if(a < b) {a = b;return true;}return false;}
template<typename T>
bool chmin(T &a,const T &b) {if(a > b) {a = b;return true;}return false;}

struct edge{
	ll to,cost,leave;
};

vector<edge> es[100005];
vector<ll> d(100005,INF);

int main(){
	ll n,m,x,y;
	cin >> n >> m >> x >> y;

	x--;y--;

	for(int i=0;i < m;i++){
		ll a,b,t,k;
		cin >> a >> b >> t >> k;
		a--;b--;
		es[a].push_back({b,t,k});
		es[b].push_back({a,t,k});

	}

	d[x] = 0;

	priority_queue<P,vector<P>,greater<P>> que;

	que.push(P(x,0));

	while(!que.empty()){
		P p = que.top();que.pop();


		ll now = p.first;
		ll curr = p.second;

		for(auto e: es[now]){
			ll lag = (curr + e.leave - 1)/e.leave;
			lag *= e.leave;
			if(d[e.to] > lag + e.cost || d[e.to] == INF){
				d[e.to] = e.cost + lag;
				que.push(P(e.to,d[e.to]));
			}
		}
	}

	if(d[y] == INF) cout << -1 << endl;
	else cout << d[y] << endl;
 	return 0;
}