
// Includes, Defines and macros
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
#define sz(x) x.size()
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
/* Typedefs */

typedef long long ll;
typedef unsigned long long llu;
typedef long double ld;

/* Utilities */
//template <typename T>
//bool cmp(T const &i, T const &j)
//{
//	return i>j;
//}

bool cmp( pair< pair<int,int>, int > const &a, pair< pair<int,int>, int > const  &b)
{
    return a.second < b.second;
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
struct subset
{
    int parent;
    int Rank;
};

int Find(subset s[], int i)
{
    if(s[i].parent != i)
        s[i].parent = Find(s, s[i].parent);
    return s[i].parent;
}

void Union(subset s[], int x, int y)
{
    int xroot = Find(s, x);
    int yroot = Find(s, y);

    if(s[xroot].Rank < s[yroot].Rank)
        s[xroot].parent = yroot;
    else if(s[xroot].Rank > s[yroot].Rank)
        s[yroot].parent = xroot;
    else
    {
        s[yroot].parent = xroot;
        s[xroot].Rank++;
    }
}

int main(int argc, char const *argv[])
{
	FIO
    ll c,f;
    cin>>c>>f;
    vector< pair< pair<int,int>, int > > fl(f);
    int x,y,p;
    for(int i=0; i<f; i++)
    {
        cin>>x>>y>>p;
        fl[i] = mp(mp(x,y),p);
    }
    sort(fl.begin(), fl.end(), cmp);
    subset s[f];
    for (int i=0; i<f; i++)
    {
        s[i].parent = i;
        s[i].Rank = 0;
    }
    int e = 0, i=0;
    ll ans = 0;
    while (e < f - 1)
    {
        int x = Find(s, fl[i].first.first);
        int y = Find(s, fl[i].first.second);

        if(x != y)
        {
            ans += fl[i].second;
            Union(s, x, y);
        }
        i++;
        e++;
    }
    cout<<ans<<endl;
	return 0;
}
