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
	int s,a,b,c;
	while(1)
	{
		cin>>s>>a>>b>>c;
		if(!s and !a and !b and !c)
			break;
		int ans = 1080;
		ans += (a > s ? (s+40-a)*9 : (s-a)*9);
		ans += (b < a ? (40-a+b)*9 : (b-a)*9);
		ans += (c > b ? (b+40-c)*9 : (b-c)*9);
		cout<<ans<<endl;
	}
	return 0;
}

