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

vector<ll> primeFactorize(int p)
{
    vector<ll> pf;
    if(p%2 == 0)
        pf.pb(2);
    while(p%2 == 0)
        p/=2;
 
    for(int i=3; i*i <= p; i++){
        if(p%i == 0)
            pf.pb(i);
        while(p%i == 0)
            p /= i;
    }
 
    if(p>2)
        pf.pb(p);
 
    return pf;
}
 
ll etf(ll p)
{
    vector<ll> pf = primeFactorize(p);
    ll phin = p;
    int sz = pf.size();
    for(int i=0; i<sz; i++)
        phin = (phin * (pf[i]-1))/pf[i];
    return phin;
}

int main()
{
	FIO
	ll n;
	cin>>n;
	ll ans = etf(n);
	ans *=2;
	cout<<ans<<endl;
	return 0;
}

