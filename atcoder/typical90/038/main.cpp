#include<bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i) < (n);(i)++)
#define rep2(i,m,n) for(int (i)=(m);(i) < (n);(i)++)


using namespace std;
using ll = long long;
using ld = long double;

const ll MAX = 1000000000000000000LL;

template<typename T>
bool chmax(T &a,const T &b) {if(a < b) {a = b;return true;}return false;}
template<typename T>
bool chmin(T &a,const T &b) {if(a > b) {a = b;return true;}return false;}

ll gcd(ll a,ll b){
	if(b == 0) return a;
	else return gcd(b,a%b);
}

ll lcm(ll a,ll b){
	ll c = b / gcd(a,b);
	return a*c;
}

bool judge(ll a,ll b){
	return a / gcd(a,b) <= MAX / b;
}

void solve(ll a,ll b){
	if(judge(a,b)) cout << lcm(a,b) << endl;
	else cout << "Large" << endl;
}

int main(){
	ll a,b;
	cin >> a >> b;
	
	solve(a,b);
	return 0;
}
