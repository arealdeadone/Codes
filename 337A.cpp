#include <bits/stdc++.h>
#define mp  make_pair
#define pb  push_back
#define ii  pair<int,int>
#define vi  vector<int>
#define vii vector<ii>
#define mii map<int,int>
#define mld map<ll,ll>
#define vvi vector< vi >
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    FIO
    int n,m;
    cin>>n>>m;
    vector<int> f(m);
    for(int i=0; i<m; i++)
        cin>>f[i];
    sort(f.begin(), f.end());
    int ans = INT_MAX;
    for(int i=0; i<=m-n; i++)
        ans = min(ans, f[n+i-1]-f[i]);
    cout<<ans<<endl;
}
