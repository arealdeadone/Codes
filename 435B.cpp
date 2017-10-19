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
typedef vector<int,int> vii;
typedef vector< vector<int> > vvi;

int main()
{
	FIO
	int n;
	cin>>n;
	vvi g(n+1);
	for(int i=0; i<n-1; i++)
	{
		int u,v;
		cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}
	
	vector<int> c(n+1,-1);
	c[1] = 1;
	queue<int> q;
	q.push(1);
	while(!q.empty())
	{
		int u = q.front();
		q.pop();
		int sz = g[u].size();
		for(int i=0; i<sz; i++)
		{
			if(c[g[u][i]] == -1)
			{
				c[g[u][i]] = 1 - c[u];
				q.push(g[u][i]);
			}
		}
	}
	ll x = 0, y = 0;
	for(int i=1; i<=n; i++)
		c[i] == 1 ? ++x : ++y;
	cout<<(x*y - n + 1)<<endl;
	return 0;
}

