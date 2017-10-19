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

int main()
{
	FIO
	TEST
	{
		string s;
		int x,y;
		cin>>s>>x>>y;
		stack<int> a,b;
		int ssz = sz(s);
		repn(i,ssz)
		{
			s[i] == 'a' ? a.push(s[i]) : b.push(s[i]);
		}
		int ga = (a.size()/x), gb = (b.size()/y);
		vector<string> fs;
		if(ga >= gb)
		{
			while(!a.empty())
			{
				string ts = "";
				repn(i, x)
				{
					ts += "a";
					a.pop();
					if(a.empty())
						break;
				}
				fs.pb(ts);
				if(a.empty())
					break;
				if(!b.empty())
				{
					fs.pb("b");
					b.pop();	
				}
				else
					fs.pb("*");
			}
			int fsz = sz(fs);
			
			reps(i,1,fsz,2)
			{
				if(b.empty()) break;
				string ts = fs[i];
				while(ts.size() < y)
				{
					ts.pb('b');
					b.pop();
					if(b.empty())
						break;
				}
				fs[i] = ts;
			}
//			DEBUG_ARR(fs)
//			cerr<<b.size()<<" "<<y<<endl;
			if(b.size() <= y)
			{
				string ts = "";
				while(!b.empty())
				{
					ts += "b";
					b.pop();
				}
//				cerr<<ts<<endl;
				fs.pb(ts);
			}
			else
			{
				while(!b.empty())
				{
					string ts = "";
					repn(i,y)
					{
						ts += "b";
						b.pop();
						if(b.empty())
							break;
					}
					fs.pb(ts);
					if(b.empty())
						break;
					fs.pb("*");
				}
			}
			fsz = sz(fs);
			repn(i,fsz)
				cout<<fs[i];
			cout<<endl;	
		}
		else
		{
			while(!b.empty())
			{
				string ts = "";
				repn(i, y)
				{
					ts += "b";
					b.pop();
					if(b.empty())
						break;
				}
				fs.pb(ts);
				if(b.empty())
					break;
				if(!a.empty())
				{
					fs.pb("a");
					a.pop();	
				}
				else
					fs.pb("*");
			}
			int fsz = sz(fs);
			
			reps(i,1,fsz,2)
			{
				if(a.empty()) break;
				string ts = fs[i];
				while(ts.size() < x)
				{
					ts.pb('a');
					a.pop();
					if(a.empty())
						break;
				}
				fs[i] = ts;
			}
	//			DEBUG_ARR(fs)
			if(a.size() <= x)
			{
				string ts = "";
				while(!a.empty())
				{
					ts += "a";
					a.pop();
				}
				fs.pb(ts);
			}
			else
			{
				while(!a.empty())
				{
					string ts = "";
					repn(i,x)
					{
						ts += "a";
						a.pop();
						if(a.empty())
							break;
					}
					fs.pb(ts);
					if(a.empty())
						break;
					fs.pb("*");
				}
			}
			fsz = sz(fs);
			repn(i,fsz)
				cout<<fs[i];
			cout<<endl;
		}
	}
	
	
	return 0;
}

