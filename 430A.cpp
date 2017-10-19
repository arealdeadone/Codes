#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
typedef long double ld;
typedef pair<int,int> ii;
typedef vector<int,int> vii;
typedef vector< vector<int> > vvi;

int main()
{
	FIO
	ll l,r,x,y,k;
	cin>>l>>r>>x>>y>>k;
	ll lo = (ll)ceil((ld)l / k);
	ll hi = (ll)floor((ld)r / k);
	if(lo <= hi && lo <= y && hi >= x) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}

