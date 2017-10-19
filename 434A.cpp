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

ll lcm(ll a, int k)
{
	ll p = 1;
	while(k)
	{
		p *= 10;
		k--;
	}
	return (p*a)/__gcd(a, p);
}

int main()
{
	FIO
	ll n;
	int k;
	cin>>n>>k;
	cout<<(lcm(n,k))<<endl;
	return 0;
}

