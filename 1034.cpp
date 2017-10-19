// URI OJ 1034 Basic DP - Coin Change Problem

/* Includes, Defines and macros */
#include <bits/stdc++.h>
#define INF 1e9+1e8
#define LINF 1e18
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vb vector<bool>
#define ii pair<int,int>
#define vii vector< ii >
#define vvi vector< vi >
#define mii map<int,int>
#define mll map<ll,ll>
#define vit vi::iterator
#define viit vii::iterator
#define vvit vvi::iterator
#define f1(i,n) for(auto i=0; i<n; i++)
#define fr(i,s,e) for(auto i=s; i<=e; i++)
#define ffind(var,val) var.find(val)
#define vec(x) vector< x >
#define sz(x) (int)(x.size())
#define all(x) x.begin(), x.end()
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
/* Typedefs */

typedef long long ll;
typedef unsigned long long llu;
typedef long double ld;

/* Utilities */
template <typename T>
bool cmp(T const &i, T const &j)
{
	return i>j;
}

void sieve(vb &primes, int maxlim)
{
	int n = maxlim;
	primes.resize(maxlim, true);
	primes[0] = primes[1] = false;
	for(int i=4; i*i<=n; i++)
		primes[i] = false;
	for(int i=3; i*i<=n; i+=2)
	{
		if(primes[i])
		{
			for(int j=2; i*j<=n; j++)
				primes[j*i] = false;
		}
	}
}

bool isPrime(vb &pm, int n)
{
	return pm[n];
}

/* Actual Code */


int main(int argc, char const *argv[])
{
	FIO
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vec(ll) den(n), dp(m+1, LINF);
        for(int i=0; i<n; i++)
            cin>>den[i];
        dp[0] = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=den[i]; j<=m; j++)
                dp[j] = min(dp[j], 1+dp[j-den[i]]);
        }
        cout<<dp[m]<<endl;
    }
	return 0;
}
