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
    int n;
    cin>>n;
    vi A(n), B(n);
    mii fa;
    f1(i,n) { cin>>A[i]; fa[A[i]] = i; }
    B = A;
    sort(B.begin(), B.end());
    int j=0;
    int swaps=0;
    f1(i,n){
        if(A[i] != B[i]){
            int idx = fa[B[i]];
            if(A[i] == B[idx]){
                swap(A[i], A[idx]);
                swaps++;
            }
        }
    }
    bool nc=false;
    //cerr<<swaps<<endl;
    j=0;
    f1(i,n){
        if(A[i] == B[j])
            j++;
        else
            swaps++;
    }
    if(nc)
        swaps--;
    //cerr<<swaps<<endl;
    cout<<swaps<<endl;
    return 0;
}
