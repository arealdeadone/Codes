#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define gcd __gcd
#define lcm(a,b) (a*b)/gcd(a,b)
#define inf 0xFFFFFFFF/2
#define uinf 0xFFFFFFFF
#define infl 0xFFFFFFFFFFFFFFFF/2
#define uinfl 0xFFFFFFFFFFFFFFFF
#define TEST int t; cin>>t; while(t--)
#define rep(i,a,b) for(int i=(int)a; i<b; i++)
#define repc(i,a,c) for(int i=(int)a; c; i++)
#define reps(i,a,b,s) for(int i=(int)a; i<b; i+=s)
#define repcs(i,a,c,s) for(int i=(int)a; c; i+=s)
#define repn(i,n)  for(int i=0; i<n; i++)
#define per(i,a,b) for(int i=b; i >= a; i--)
#define linv(a,n)  vector<int> a(n); for(int i=0; i<n; i++) cin>>a[i];
#define linp(a,n)  int arr[n]; for(int i=0; i<n; i++) cin>>a[i];
#define lgenv(t,a,n) vector<t> a(n); for(int i=0; i<n; i++) cin>>a[i];
#define lgenp(t,a,n) t a[n]; for(int i=0; i<n; i++) cin>>a[i];
#define lgeni(t,a,n,v) t a[n]; memset(a, v, (sizeof(a)/sizeof(t)));
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define SZ(x) (x).size()
#define DEBUG_ARR(a,n) for(int i=0; i<n; i++) cerr<<a[i]<<" "; cerr<<endl;
#define PRINT_ARR(a,n) for(int i=0; i<n; i++) cout<<a[i]<<" "; cout<<endl;
#define RD_I(fi) freopen(fi, "r", stdin);
#define RD_O(fo) freopen(fo, "w", stdout);
#define RD_IO(fi,fo) RD_I(fi); RD_O(fo);
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
	while(1)
	{
		string s;
		cin>>s;
		int len = SZ(s);
		if(s[0] == '0' && len==1)
			break;
		int s1=0, s2=0;
		string ns;
		repn(i,len)
		{
			if(s[i]>='0' && s[i]<='9')
				ns.pb(s[i]);
		}
		len = SZ(ns);
		repn(i,len)
		{
			if(i&1) s1 += (ns[i]-'0');
			else s2 += (ns[i]-'0');
		}
		if(abs(s1-s2)%11 == 0)
			cout<<s<<" is a multiple of 11."<<endl;
		else
			cout<<s<<" is not a multiple of 11."<<endl;
	}
	return 0;
}

