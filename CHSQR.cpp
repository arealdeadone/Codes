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
        int n;
        cin>>n;
        int mat[n+1][n+1];
        memset(mat, 0, sizeof mat);
        int s = (n+1)/2;
        for(int i=s; i>=1; i--)
        {
            mat[s-i+1][i] = 1;
            int r = s-i+1;
            int st=2;
            for(int j=i+1; !mat[r][(j%(n+1))]; j++)
            {
                mat[r][(j%(n+1))] = st;
                st++;
                if((j%(n+1))==0)
                    st--;
            }
        }
        for(int i=n; i>=s; i--)
        {
            mat[s+n-i+1][i] = 1;
            int r = s+n-i+1;
            int st=2;
            for(int j=i+1; !mat[r][(j%(n+1))]; j++)
            {
                mat[r][(j%(n+1))] = st;
                st++;
                if((j%(n+1))==0)
                    st--;
            }
        }
        fr(i,1,n){
            fr(j,1,n)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
