/* Includes, Defines and macros */
#include <bits/stdc++.h>
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
#define dmap(x,y) map< x , y >
#define sz(x) x.size()
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
ll mat[1010][1010];
map<pair<ii,int>,ll> memo;
int n,m;

int kadane(int i, int j, int d)
{
    if(i == 0 || j == 0 || i == n-1 || j == m-1)
        return mat[i][j];
    if(memo[mp(mp(i,j),d)])
        return memo[mp(mp(i,j),d)];
    if(d == 0)
        memo[mp(mp(i,j),d)] = min(mat[i][j], mat[i][j]+kadane(i-1,j,d));
    if(d == 1)
        memo[mp(mp(i,j),d)] = min(mat[i][j], mat[i][j]+kadane(i+1,j,d));
    if(d == 2)
        memo[mp(mp(i,j),d)] = min(mat[i][j], mat[i][j]+kadane(i,j+1,d));
    if(d == 3)
        memo[mp(mp(i,j),d)] = min(mat[i][j], mat[i][j]+kadane(i,j-1,d));

    return memo[mp(mp(i,j),d)];
}

int main(int argc, char const *argv[])
{
	FIO
	//freopen("test.in","r", stdin);
	//freopen("test.out","w", stdout);
    int t;
    cin>>t;
    while(t--)
    {
        memset(mat, 0, sizeof mat);
        memo.clear();
        cin>>n>>m;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        ll ans = 1e15;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                ll tans = kadane(i,j,0)+kadane(i,j,1)+kadane(i,j,2)+kadane(i,j,3)-3*mat[i][j];
                ans = min(ans, tans);
            }
        }
        cout<<ans<<endl;
    }
	return 0;
}
