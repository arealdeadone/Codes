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
	vector<ll> pt(n);
	for(int i=0; i<n; i++)
		cin>>pt[i];
	map<ld,ll> slc;
	for(int i=0; i<n-1; i++)
	{
		for(int j=(i+1); j < n; j++)
		{
			ld slp = (pt[i]-pt[j])/(ld)(i-j);
			if(slc.count(slp))
				slc[slp]++;
			else
				slc[slp] = 1;
		}
	}
	ll chk = (n*(n-1))/2;
	bool poss = false;
	map<ld,ll>::iterator i;
	for(i = slc.begin(); i != slc.end() && !poss; i++)
		cout<<'('<<i->first<<", "<<i->second<<") ";
	cout<<endl;
	for(i = slc.begin(); i != slc.end() && !poss; i++)
		if(i->second == chk)
			poss = true;
	
	if(slc.size() < 2)
		poss = false;
	
	cout<<(poss?"Yes":"No")<<endl;
	return 0;
}

