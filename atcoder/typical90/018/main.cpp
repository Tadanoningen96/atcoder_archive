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

constexpr ld PI = 3.14159265358979;

int main(){
	ld T,L,X,Y;
	ll q;
	cin >> T >> L >> X >> Y >> q;
	
	while(q--){
		ld t;
		cin >> t;
		ld omega = 2*PI*t/T;
		ld A = L/2*(sinl(omega-PI/2)+1);
		ld B = X*X + (Y+L/2*sinl(omega))*(Y+L/2*sinl(omega));B = sqrtl(B);
		ld theta = atan(A/B);
		theta *= 180;theta /= PI;
		cout << fixed << setprecision(12);
		cout << theta << endl;
	}
	return 0;
}
