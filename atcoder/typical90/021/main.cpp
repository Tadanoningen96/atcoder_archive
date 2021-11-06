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

vector<ll> G[100005];
vector<ll> rG[100005];
vector<int> vs;
vector<bool> seen(100005,false);

void dfs(int u){
	seen[u] = true;

	for(auto v: G[u]){
		if(!seen[v]) dfs(v);
	}
	vs.push_back(u);
}

void rdfs(int u,ll &cnt){
	seen[u] = true;
	cnt++;
	for(auto v: rG[u]){
		if(!seen[v]) rdfs(v,cnt);
	}
}

ll scc(ll n){
	fill(seen.begin(),seen.end(),false);
	vs.clear();
	
	for(int i=0;i < n;i++){
		if(!seen[i]) dfs(i);
	}

	fill(seen.begin(),seen.end(),false);
	
	ll k = 0;
	for(int i=vs.size()-1;i >= 0;i--){
		if(!seen[vs[i]]){
			ll cnt = 0;
			rdfs(vs[i],cnt);
			k += cnt*(cnt-1)/2;
		}
	}
	return k;
}

int main(){
	int n,m;
	cin >> n >> m;

	for(int i=0;i < m;i++){
		int from,to;
		cin >> from >> to;
		from--;to--;
		G[from].push_back(to);
		rG[to].push_back(from);
	}

	ll ans = scc(n);

	cout << ans << endl;
	return 0;
}
