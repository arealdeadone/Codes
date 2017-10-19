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

bool rangeSort(pair<pair<int,int>, string> i, pair<pair<int,int>, string> j)
{
	if(i.first.first == j.first.first)
	{
		if(i.first.second == j.first.second)
			return i.second < j.second;
		return i.first.second < j.first.second;
	}
	return i.first.first < j.first.first;
}

bool rangeLbl(pair<pair<int,int>, string> i, int val)
{
	return i.first.first < val;
}

int main()
{
	FIO
//	RD_IO("Uva-01237.in","Uva-01237.out");
	TEST
	{
		int d;
		cin>>d;
		vector<pair<pair<int,int>,string> > ranges(d);
		repn(i,d)
			cin>>ranges[i].second>>ranges[i].first.first>>ranges[i].first.second;
		sort(all(ranges), rangeSort);
		int q;
		cin>>q;
		while(q--)
		{
			int val;
			cin>>val;
			int ctr=0, idx;
			repn(i,d)
			{
				if(ctr > 1)	break;
				if(val >= ranges[i].first.first && val <= ranges[i].first.second)
				{
					idx = i;
					ctr++;
				}
			}
			if(!ctr || ctr>1)
				cout<<"UNDETERMINED"<<endl;
			else
				cout<<ranges[idx].second<<endl;
//			vector<pair<pair<int,int>, string> >::iterator lb = lower_bound(all(ranges), val, rangeLbl);
//			int pos = (lb - ranges.begin());
//			int l=0,u=d-1,mid;
//			while(l<u)
//			{
//				mid = (l+u)>>1;
//				if(ranges[mid].first.first >= val)
//					u = mid-1;
//				else
//					l = mid+1;
//			}
//			per(i,l,u)
//			{
//				if(ranges[i].first.first < val)
//				{
//					u = i;
//					break;
//				}
//			}
//			if(pos - u - 1 > 1)
//				cout<<"UNDETERMINED"<<endl;
//			else
//				cout<<ranges[u+1].second<<endl;
		}
		if(t)
			cout<<endl;
	}
	return 0;
}

