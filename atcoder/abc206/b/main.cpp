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
	int n;
	cin >> n;
	int ans = 1;

	while(ans*(ans + 1)/2 < n) ans++;
	cout << ans << endl;
	return 0;
}
