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
#define f1(i,n) for(int i=0; i<n; i++)
#define fr(i,s,e) for(int i=s; i<=e; i++)
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
        ll n;
        cin>>n;
        vec(ll) arr(n), lcm;
        f1(i,n) cin>>arr[i];
        f1(i,n-1)
        {
            fr(j, i+1, n-1)
            {
                ll tlcm;
                tlcm = ((arr[i]*arr[j])/(__gcd(arr[i],arr[j])));
                lcm.pb(tlcm);
            }
        }
        sort(lcm.begin(),lcm.end());
        cout<<lcm.front()<<endl;
    }
    return 0;
}
