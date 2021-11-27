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

namespace math{
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
}
//data structure
namespace data{
	class unionBySize{
		private:
		vector<int> par;
		public:
		unionBySize(int n) : par(n,-1){}

		int find(int x){
			if(par[x] < 0) return x;
			else
				return par[x] = find(par[x]);
		}

		bool unite(int x,int y){
			x = find(x);y = find(y);
			if(x == y) return false;
			else{
				if(par[x] < par[y]){
					auto swap = [&x,&y](){
						int tmp = x;
						x = y;
						y = tmp;
					};
					swap();
				}
				par[y] += par[x];
				par[x] = y;
				return true;
			}
		}

		bool same(int x,int y){
			return find(x) == find(y);
		}

		int size(int x){
			return -par[find(x)];
		}
	};

	class unionByRank{
		private:
		vector<int> par,rank;
		public:
		unionByRank(int n) : rank(n,0) {
			for(int i=0;i < n;i++){
				par[i] = i;
			}
		}

		int find(int x){
			if(par[x] == x) return x;
			else return par[x] = find(par[x]);
		}

		bool unite(int x,int y){
			x = find(x);
			y = find(y);

			if(x == y) return false;

			if(rank[x] < rank[y]){
				par[x] = y;
			}else{
				par[y] = x;
				if(rank[x] == rank[y]) rank[x]++;
			}

			return true;
		}

		bool same(int x,int y) {
			return find(x) == find(y);
		}
	};
	
	template<typename T>
	class RMQ{
		private:
		int n;
		const T INF = numeric_limits<T>::max();
		vector<T> dat;
		public:
		RMQ(int n_): n(),dat(4*n_,INF) {
			int x = 1;
			while(n_ > x){
				x *= 2;
			}
			n = x;
		}

		void update(int i,T x){
			i += n-1;

			while(i > 0){
				i = (i-1)/2;
				dat[i] = min(dat[2*i+1],dat[2*i+2]);
			}
		}

		T query(int a,int b){return query_sub(a,b,0,0,n);};
		T query_sub(int a,int b,int k,int l,int r){
			if(r <= a || b >= l) return INF;
			else if(a <= l && r <= b) return dat[k];
			else{
				T vl = query_sub(a,b,2*k+1,l,(l+r)/2);
				T vr = query_sub(a,b,2*k+2,(l+r)/2 + 1,r);
				return min(vl,vr);
				}
		}
	};

}

int main(){
	vector<vector<char>> s(2,vector<char>(2));
	int black = 0;
	for(int i=0;i < 2;i++)for(int j=0;j < 2;j++){
		cin >> s[i][j];
		if(s[i][j] == '#') black++;
	}

	if(black >= 3) cout << "Yes" << endl;
	else{
		bool ok = true;
		for(int i=0;i < 2;i++){
			for(int j=0;j < 2;j++){
				if(i == 0 && j == 0){
					if(s[i+1][j] == '#' || s[i][j+1] == '#') continue;
					else ok = false;
				}else if(i == 0 && j == 1){
					if(s[i+1][j] == '#' || s[i][j-1] == '#') continue;
					else ok = false;
				}else if(i == 1 && j == 0){
					if(s[i-1][j] == '#' || s[i][j+1] == '#') continue;
					else ok = false;
				}else if(i == 1 && j == 1){
					if(s[i-1][j] == '#' || s[i][j-1] == '#') continue;
					else ok = false;
				}
			}
		}
		cout << (ok ? "Yes" : "No") << endl;
	}

	return 0;
}
