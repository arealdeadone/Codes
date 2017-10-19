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
	map<double, ii> nd;
	vector<double> forsort;
	int a = 1,b;
	while(a <= n/2)
	{
		b = (n-a);
		double res = (a/(double)b);
		if(res != 1)
		{
			forsort.pb(res);
			nd[res] = mp(a,b);
		}
		a++;
	}
	sort(forsort.begin(), forsort.end());
	ii toprint = nd[*(forsort.end() - 1)];
//	for(auto i = nd.begin(); i != nd.end(); i++)
//	{
//		cout<<i->first<<" "<<i->second.first<<" "<<i->second.second<<endl;
//	}
	int sz = forsort.size();
	ii tp;
	for(int i=sz-1; i>=0; i--)
	{
		tp = nd[forsort[i]];
		int div = __gcd(tp.first, tp.second);
		if(div == 1)
			break;
	}
	cout<<tp.first<<" "<<tp.second<<endl;
	return 0;
}

