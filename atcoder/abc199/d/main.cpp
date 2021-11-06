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

vector<int> G[200050];

int main(){
	int n,m;
	cin >> n >> m;
	
	for(int i=0;i < m;i++){
		int a,b;
		cin >> a >> b;
		a--;b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}

	vector<int> c(n);

	for(int bits=0;bits < (1 << (n-1));bits++){
		for(int j=0;j < n-1;j++){
			if(bits & 1 << j){
			
			
			}
		}		
	}
	return 0;
}
