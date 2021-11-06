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

//Graph
vector<int> G[100005];

struct node{
	int to;
	ll cost;
};
vector<node> GC[100005];

//Mathematics(gcd,lcm,power,factorization,etc..)
template<typename T>
T gcd(T a,T b){
	if(b == 0) return a;
	else return gcd(b,a%b);
}

template<typename T>
T lcm(T a,T b){
	T res = a;
	res /= gcd(a,b);res *= b;
	return res;
}

template<typename T>
vector<T> divisor(T n){
	vector<T> res;

	for(int i=1;i*i <= n;i++){
		if(n % i == 0){
			res.push_back(i);
			if(i * i != n) res.push_back(n/i);
		}
	}
	return res;
}

template<typename T>
map<T,T> factorization(T n){
	map<T,T> res;
	for(int i=0;i*i <= n;i++){
		 while(n % i == 0){
			res[i] += 1;
			n /= i;
		}
	}
	if(n != 1) res[n] += 1;
	return res;
}

ll pow(ll x,ll n){
	ll res = 1;
	while(n > 0){
		if(n & 1) res = res * x;
		x = x*x;
		n >>= 1;
	}
	return res;
}

ll mod_pow(ll x,ll n,ll mod){
	ll res = 1;
	while(n > 0){
		if(n & 1) res = res * x % mod;
		x = x*x % mod;
		n >>= 1;
	}
	return res;
}

constexpr int INF = (1 << 30);
using P = pair<int,int>;

int main(){
	int n,q;
	cin >> n >> q;

	vector<int> dist(100005,INF);

	for(int i=0;i < n-1;i++){
		int a,b;
		cin >> a >> b;
		a--;b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	priority_queue<P,vector<P>,greater<P>> que;
	que.push(P(0,0));
	dist[0] = 0;
	while(!que.empty()){
		int u = que.top().first;
		int d = que.top().second;
		que.pop();

		for(auto v : G[u]){
			if(dist[v] > d + 1){
				dist[v] = d + 1;
				que.push(P(v,dist[v]));
			}
		}
	}

	for(int i=0;i < q;i++){
		int c,d;
		cin >> c >> d;
		c--;d--;
		if(dist[c] % 2 == dist[d] % 2) cout << "Town" << endl;
		else cout << "Road" << endl;
	}
	return 0;
}
