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

bool compare_by_b(pair<string,int> a,pair<string,int> b){
	if(a.second != b.second){
		return a.second < b.second;
	}else{
		return a.first < b.first;
	}
}

int main(){
	int n;
	cin >> n;
	vector<pair<string,int>> m(n);
	for(int i=0;i < n;i++){
		cin >> m[i].first >> m[i].second;
	}

	sort(m.begin(),m.end(),compare_by_b);

	string ans = m[n-2].first;

	cout << ans << endl;
	
	return 0;
}
