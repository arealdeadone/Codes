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
#define sz(x) x.size()
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
/* Typedefs */

typedef long long ll;
typedef unsigned long long llu;
typedef long double ld;

const int md = 1000000007;

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

inline int mul(int a, int b) {
  return (long long)a * b % md;
}

inline int power(int a, int b) {
  int res = 1;
  while (b > 0) {
    if (b & 1) {
      res = mul(res, a);
    }
    b >>= 1;
    a = mul(a, a);
  }
  return res;
}

/* Actual Code */

void clps(string pat, int patsize, vi &lps){
    lps.resize(patsize);
    int len=0;
    int i=1;
    while(i<patsize)
    {
        if(pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if(len != 0)
                len = lps[len-1];
            else
            {
                lps[i]=0;
                i++;
            }
        }
    }
}

void kmp(string pat, string txt, vi &occur)
{
    int patsize = sz(pat);
    int txtsize = sz(txt);
    vi lps;
    clps(pat,  patsize, lps);
    int i=0, j=0;
    while(i<txtsize)
    {
        if(pat[j] == txt[i])
        {
            i++;
            j++;
        }
        if(j == patsize)
        {
            occur.pb(i-j);
            j = lps[j-1];
        }
        else if (i<txtsize && pat[j] != txt[i])
        {
            if(j != 0)
                j = lps[j-1];
            else
                i++;
        }
    }
}


int main(int argc, char const *argv[])
{
    FIO
    int t;
    cin>>t;
    while(t--)
    {
        string s,f;
        cin>>s>>f;
        vi idx;
        kmp(f, s, idx);
        int fsize = sz(f), idsz = sz(idx);
        string fstring;
        for(int j=0; j<fsize; j++)
            fstring.pb(s[j+idx[0]]);
        for(int i=1; i<idsz; i++)
        {
            for(int j=0; j<fsize; j++)
            {
                if(idx[i]+j-idx[i-1] < fsize)
                    continue;
                fstring.pb(s[idx[i]+j]);
            }
        }
//        cerr<<fstring<<endl;
        int csf = ceil(sz(fstring)/((double)sz(f)));
        int ans;
        ans = power(2, csf);
        ans = ((ans%md - 1%md)+md)%md;
        cout<<ans<<endl;
    }
    return 0;
}
