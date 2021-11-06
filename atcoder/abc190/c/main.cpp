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

int main(){
	int n,m;
	cin >> n >> m;

	vector<int> a(m),b(m);
	rep(i,m){
		cin >> a[i] >> b[i];
		a[i]--;b[i]--;
	}
	int k;
	cin >> k;
	vector<int> c(k),d(k);

	rep(i,k){
		cin >> c[i] >> d[i];
		c[i]--;d[i]--;
	}

	int ans = 0;

	for(int bit=0;bit < (1<<k);bit++){
		vector<bool> is_ball(n,false);
		for(int i=0;i < k;i++){
			if((bit >> i)&1){
				is_ball[c[i]] = true;
			}else{
				is_ball[d[i]] = true;
			}
		}

		int cnt = 0;
		for(int i=0;i < m;i++){
			if(is_ball[a[i]] == true && is_ball[b[i]] == true){
				cnt++;
			}
		}
		chmax(ans,cnt);
	}

	cout << ans << endl;
	return 0;
}