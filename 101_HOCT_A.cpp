#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    FIO
    long long n,m;
    cin>>n>>m;
    vector<long long> c(n);
    for(int i=0; i<n; i++)
        cin>>c[i];
    long long ans = INT_MAX;
    for(int i=0; i<=m; i++)
    {
        ll tans = 0;
        for(int j=i; j<n; j+=(2*m))
            tans += c[i];
        ans = min(ans, tans);
    }
    cout<<ans<<endl;
}
