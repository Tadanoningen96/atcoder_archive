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

vector<vector<char>> rotate(vector<vector<char>> &S){
	vector<vector<char>> res((int)S.size(),vector<char>((int)S.size()));

	for(int i=0;i < (int)S.size();i++){
		for(int j=0;j < (int)S.size();j++){
			res[i][j] = S[(int)S.size()-1-j][i];
		}
	}
	return res;
}

pair<int,int> most_left_edge(vector<vector<char>> &S){

	for(int i=0;i < (int)S.size();i++){
		for(int j=0;j < (int)S.size();j++){
			if(S[i][j] == '#'){
				return {i,j};
			}
		}
	}
}

bool solve(vector<vector<char>> &S,vector<vector<char>> &T){
	int si = most_left_edge(S).first,sj = most_left_edge(S).second;
	int ti = most_left_edge(T).first,tj = most_left_edge(T).second;

	int offset_i = ti-si,offset_j = tj-sj;

	for(int i=0;i < (int)S.size();i++){
		for(int j=0;j < (int)S.size();j++){
			int ii = i+offset_i,jj = j+offset_j;

			if((ii>=0 && ii<(int)S.size()) && (jj>=0 && jj<(int)S.size())){
				if(S[i][j] != T[ii][jj]) return false;
			}else{
				if(S[i][j] == '#') return false;
			}
		}
	}
	return true;
}

int main(){
	int n,cnts = 0,cntt = 0;
	cin >> n;
	vector<vector<char>> S(n,vector<char>(n)),T(n,vector<char>(n));

	for(int i=0;i < n;i++){
		for(int j=0;j < n;j++){
			cin >> S[i][j];
			if(S[i][j] == '#') cnts++;
		}
	}

	for(int i=0;i < n;i++){
		for(int j=0;j < n;j++){
			cin >> T[i][j];
			if(T[i][j] == '#') cntt++;
		}
	}

	if(cnts == cntt){
		for(int i=0;i < 4;i++){
			if(solve(S,T)){
				cout << "Yes" << endl;
				return 0;
			}
			S = rotate(S);
		}
	}

	cout << "No" << endl;

	return 0;
}
