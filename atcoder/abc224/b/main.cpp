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

int main(){
	int h,w;
	cin >> h >> w;

	vector<vector<ll>> a(h,vector<ll>(w));

	for(int i=0;i < h;i++)for(int j=0;j < w;j++) cin >> a[i][j];
	
	bool ok = true;
	for(int i1=0;i1 < h;i1++){
		for(int j1=0;j1 < w;j1++){
			for(int i2=i1+1;i2 < h;i2++){
				for(int j2=j1+1;j2 < w;j2++){
					if(a[i1][j1]+a[i2][j2] > a[i2][j1]+a[i1][j2]){
						ok = false;
						break;
					}
				}
			}
		}
	}

	cout << (ok ? "Yes" : "No") << endl;
	return 0;
}
