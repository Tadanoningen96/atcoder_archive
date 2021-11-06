#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i) < (n);(i)++)
#define rep2(i,m,n) for(int (i)=(m);(i) < (n);(i)++)


using namespace std;
using ll = long long;
using ld = long double;
using P = pair<int,ll>;

template<typename T>
bool chmax(T &a,const T &b) {if(a < b) {a = b;return true;}return false;}
template<typename T>
bool chmin(T &a,const T &b) {if(a > b) {a = b;return true;}return false;}

ll n,m;

struct edge{
	int to;
	ll cost;
};

vector<ll> dist(100002,1LL << 60);
vector<ll> dist1(100002);
vector<ll> dist2(100002);
vector<edge> G[100002];

void dijkstra(int start){
	priority_queue<P,vector<P>,greater<P>> que;
	dist[start] = 0;
	que.push(P(0,start));

	while(!que.empty()){
		int now = que.top().second;que.pop();
		for(int i=0;i < G[now].size();i++){
			edge e = G[now][i];
			if(dist[e.to] > dist[now] + e.cost){
				dist[e.to] = dist[now] + e.cost;
				que.push(P(dist[e.to],e.to));
			}
		}
	}
}

int main(){
	cin >> n >> m;

	for(int i=1;i <= m;i++){
		int a,b;ll c;
		cin >> a >> b >> c;
		a--;b--;
		G[a].push_back({b, c});
		G[b].push_back({a, c});
	}

	dijkstra(0);
	for(int i=0;i < n;i++) dist1[i] = dist[i];

	fill(dist.begin(),dist.end(),1LL << 60);

	dijkstra(n-1);
	for(int i=0;i < n;i++) dist2[i] = dist[i];
	
	for(int i=0;i < n;i++){
		ll ans = dist1[i] + dist2[i];
		cout << ans << endl;
	}

	return 0;
}
