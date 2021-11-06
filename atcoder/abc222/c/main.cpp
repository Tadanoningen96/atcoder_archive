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

bool comp(pair<int,int> a,pair<int,int> b){
	if(a.second > b.second) return true;
	else if(a.second == b.second && a.first < b.first) return true;
	return false;
}

int main(){
	int n,m;
	cin >> n >> m;

	vector<vector<char>> a(2*n,vector<char>(m));

	for(int i=0;i < 2*n;i++){
		for(int j=0;j < m;j++){
			cin >> a[i][j];
		}
	}

	vector<pair<int,int>> point(2*n);

	for(int i=0;i < 2*n;i++){
		point[i] = {i,0};
	}

	for(int i=0;i < m;i++){
		for(int j=0;j < n;j++){
			if(a[point[2*j].first][i] == a[point[2*j+1].first][i]) continue;
			else if((a[point[2*j].first][i] == 'G' && a[point[2*j+1].first][i] == 'C') ||
				(a[point[2*j].first][i] == 'C' && a[point[2*j+1].first][i] == 'P') ||
				(a[point[2*j].first][i] == 'P' && a[point[2*j+1].first][i] == 'G')){
				point[2*j].second++;
			}else{
				point[2*j+1].second++;
			}
		}

		//for(int j=0;j < 2*n;j++) cout << point[j].first << " " << point[j].second << endl;
		sort(point.begin(),point.end(),comp);
	}
	sort(point.begin(),point.end(),comp);
	for(int i=0;i < 2*n;i++) cout << point[i].first+1 << endl;
	return 0;
}
