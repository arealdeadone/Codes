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
    vector<ll> dp(100001,0), cnt(100001,0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int j;
        cin>>j;
        cnt[j]++;
    }
    dp[1] = cnt[1];
    for(int i=2; i<=100000; i++)
        dp[i] = max(dp[i-1], dp[i-2]+(1LL*cnt[i]*i));
    cout<<dp[100000]<<endl;
    return 0;
}
