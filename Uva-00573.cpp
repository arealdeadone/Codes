#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define gcd __gcd
#define inf 0xFFFFFFFF/2
#define uinf 0xFFFFFFFF
#define infl 0xFFFFFFFFFFFFFFFF/2
#define uinfl 0xFFFFFFFFFFFFFFFF
#define TEST int t; cin>>t; while(t--)
#define rep(i,a,b) for(int i=(int)a; i<b; i++)
#define repn(i,n)  for(int i=0; i<n; i++)
#define linp(a,n)  vector<int> a(n); for(int i=0; i<n; i++) cin>>arr[i];
#define per(i,a,b) for(int i=b; i >= a; i--)
#define all(x) ((x).begin(), (x).end())
#define allr(x) ((x).rbegin(), (x).rend())
#define sz(x) (x).size()
#define DEBUG_ARR(a) for(int i=0; i<sz(a); i++) cerr<<a[i]<<" "; cerr<<endl;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector< vector<int> > vvi;

int main(void) {
	double h, u, d, f;
	double cur_h;
	int day;
	bool result;

	while (cin >> h >> u >> d >> f) {
		if (h == 0)
			break;

		f = f * u / 100.0;
		cur_h = 0;
		day = 0;
		
		while (true) {
			day++;
			cur_h += u;
			u -= f;
			if (u < 0)
				u = 0;
			if (cur_h > h) {
				result = true;
				break;
			}
			cur_h -= d;
			if (cur_h < 0) {
				result = false;
				break;
			}
		}

		cout << (result ? "success" : "failure") << " on day " << day << endl;
	}


	return 0;
}
