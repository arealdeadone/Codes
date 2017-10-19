#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define TEST int t; cin>>t; while(t--)
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector< vector<int> > vvi;

int main()
{
	FIO
	ll n,b,h,w;
	while(cin>>n>>b>>h>>w)
	{
//		cin>>n>>b>>h>>w;
		set<ll> cost;
		while(h--)
		{
			ll p, beds;
			cin>>p;
			for(int i=0; i<w; i++)
			{
				cin>>beds;
				if(beds >= n && n*p <= b)
					cost.insert(p);
			}
		}
		if(cost.empty())
			cout<<"stay home"<<endl;
		else
			cout<<n*(*cost.begin())<<endl;
	}
	return 0;
}

