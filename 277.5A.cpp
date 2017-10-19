#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define TEST int t; cin>>t; while(t--)
#define SORT(x) sort(x.begin(),x.end())
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
	int n,m;
	cin>>n;
	vector<int> b(n);
	for(int i=0; i<n; i++)
		cin>>b[i];
	SORT(b);
	cin>>m;
	vector<int> g(m);
	for(int i=0; i<m; i++)
		cin>>g[i];
	SORT(g);
	ll ans = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(abs(b[i] - g[j]) <= 1)
			{
				g[j] = 1010;
				ans++;
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

