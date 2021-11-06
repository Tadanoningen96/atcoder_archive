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
	int n;
	cin >> n;
	if(n == 0){
		cout << "Yes" << endl;
		return 0;
	}
	while(n % 10 == 0){
		n /= 10;
	}

	vector<int> pal;

	while(n > 0){
		pal.push_back(n % 10);
		n /= 10;
	}

	int size = pal.size();
	
	bool ok = true;
	for(int i=0;i < size/2;i++){
		if(pal[i] != pal[size-i-1]){
			ok = false;
			break;
		}
	}	

	cout << (ok ? "Yes" : "No") << endl;

	return 0;
}
