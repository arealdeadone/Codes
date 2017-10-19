#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
typedef pair<int,int> ii;
typedef vector<int,int> vii;
typedef vector< vector<int> > vvi;

int main()
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		map< pair<ll,ll>,ll > hash;
		ll n,q;
		cin>>n>>q;
		bool poss = true;
		while(q--)
		{
			ll i,j,val;
			cin>>i>>j>>val;
			if(i==j && val != 0)
				poss = false;
			hash[mp(i,j)] = val;
			if(hash.find(mp(j,i)) != hash.end() && hash[mp(i,j)] != hash[mp(j,i)])
				poss = false;
		}
		cout<<(poss?"yes":"no")<<endl;
	}
	return 0;
}

