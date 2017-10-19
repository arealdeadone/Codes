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
#define repc(i,a,cond,inc) for(int i=a; cond; i+=inc)
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
	int n,k,m;
	unordered_map<int, int> hmap;
	cin>>n>>k>>m;
	linp(a,n);
	repn(i,n)
		hmap[a[i]] = (hmap.find(a[i]) == hmap.end() ? 1 : hmap[a[i]]+1);
	vi ann = a;
	sort(ann.begin(), ann.end());
	int mxd = (a.back()-a.front());
	vi fnd;
	repn(i,n)
	{
		int tempk = k-1;
		fnd.pb(a[i]);
		repc(j,1,j*m <= mxd, 1)
		{
			if(hmap.find(a[i]+(j*m)) != hmap.end()) 
			{
//				cerr<<(hmap[hmap[(a[i]+j*m)]])<<endl;
				repn(l,hmap[(a[i]+j*m)])
				{
					fnd.pb((a[i]+j*m));
					tempk--;
					if(!tempk)
						break;
				}
			}
			else if(hmap.find(a[i]-(j*m)) != hmap.end())
			{
				repn(l,hmap[(a[i]-j*m)])
				{
					fnd.pb((a[i]-j*m));
					tempk--;
					if(!tempk)
						break;
				}
			}
			if(tempk == 0)
				break;
		}
		if(tempk>0)
			fnd.clear();
		else
			break;
	}
	int fz = sz(fnd);
	
	if(fz == k)
	{
		cout<<"Yes"<<endl;
		repn(i,fz)
			cout<<fnd[i]<<" ";
	}
	else
		cout<<"No";
	cout<<endl;
	return 0;
}

