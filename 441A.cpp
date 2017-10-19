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
#define reps(i,a,b,s) for(int i=(int)a; i<b; i+=s)
#define repn(i,n)  for(int i=0; i<n; i++)
#define linp(a,n)  vector<int> a(n); for(int i=0; i<n; i++) cin>>a[i];
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

int main()
{
	FIO
	int n;
	cin>>n;
	int a,b,c;
	cin>>a>>b>>c;
	int m = 1;
	int ph = 1;
	int dist = 0;
	n--;
	while(n)
	{
		if(ph == 1)
		{
			dist += min(a,b);
			ph = min(a,b) == a ? 2 : 3;
			n--;
		}
		else if(ph == 2)
		{
			dist += min(a,c);
			ph = min(a,c) == a ? 1 : 3;
			n--;
		}
		else if(ph == 3)
		{
			dist += min(b,c);
			ph = min(b,c) == b ? 1 : 2;
			n--;
		}
	}
	cout<<dist<<endl;
	return 0;
}

