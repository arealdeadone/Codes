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
#define all(x) x.begin(), x.end()
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

bool cmp(pair<string, ll> a, pair<string, ll> b)
{
	if(a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	FIO
	string s;
	while(getline(cin,s))
	{
		s.pb(' ');
		vector<int> arr;
		int isz = sz(s);
		int temp = 0;
		bool prevsp = true;
		repn(i,isz)
		{
			if(s[i] == ' ')
			{
				if(prevsp) continue; else arr.pb(temp);
				temp = 0;
				prevsp = true;
			}
			else
			{
				prevsp = false;
				temp *= 10;
				temp += (s[i]-'0');
			}
		}
//		DEBUG_ARR(arr);
		vector< pair<string, ll> > ttl;
		ttl.pb(mp("BGC",(arr[3]+arr[6]+arr[1]+arr[7]+arr[2]+arr[5])));
		ttl.pb(mp("BCG",(arr[3]+arr[6]+arr[2]+arr[8]+arr[1]+arr[4])));
		ttl.pb(mp("CBG",(arr[5]+arr[8]+arr[0]+arr[6]+arr[1]+arr[4])));
		ttl.pb(mp("CGB",(arr[5]+arr[8]+arr[1]+arr[7]+arr[0]+arr[3])));
		ttl.pb(mp("GBC",(arr[4]+arr[7]+arr[0]+arr[6]+arr[2]+arr[5])));
		ttl.pb(mp("GCB",(arr[4]+arr[7]+arr[2]+arr[8]+arr[0]+arr[3])));
		sort(all(ttl),cmp);
		cout<<ttl[0].first<<" "<<ttl[0].second<<endl;
	}
	return 0;
}

