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

	for(int i=2;i*i <= n;i++){
		while(n % i == 0){
			res.push_back(i);
			n /= i;
		}
	}
	if(n != 1) res.push_back(n);
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
	int n,m;
	cin >> n >> m;

	vector<int> is_coprime(100005,true);
	is_coprime[0] = false;
	vector<int> ans_vec;
	
	for(int i=0;i < n;i++){
		int a;cin >> a;
		
		vector<int> prime = divisor<int>(a);
		
		for(auto &x: prime){
			if(is_coprime[x]){
				for(int j=x;j < 100005;j+=x) is_coprime[j] = false;
			}
		}
	}

	for(int i=1;i <= m;i++){
		if(is_coprime[i]) ans_vec.push_back(i);
	}

	cout << (int)ans_vec.size() << endl;
	for(auto x: ans_vec){
		cout << x << endl;
	}
	return 0;
}
