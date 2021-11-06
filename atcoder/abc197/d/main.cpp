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

const ld PI = 3.14159265358979;
int main(){
	int n;
	cin >> n;
	ld x1,y1,xm,ym;
	cin >> x1 >> y1 >> xm >> ym;

	ld m1 = (x1+xm)/2,m2 = (y1+ym)/2;

	ld ansx1 = cos(2*PI/n)*(x1-m1) - sin(2*PI/n)*(y1-m2);
	ld ansy1 = sin(2*PI/n)*(x1-m1) + cos(2*PI/n)*(y1-m2);
	ansx1 += m1;
	ansy1 += m2;

	cout << fixed << setprecision(15) << ansx1 << " " << ansy1 << endl;
	return 0;
}
