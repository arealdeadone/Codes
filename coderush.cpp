#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

int main() {
    FIO
    int n;
    cin>>n;
    vector<ll> arr(n), ps(n);
    ll s=0, maxel=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        maxel = max(maxel,arr[i]);
        s+=arr[i];
        if(i > 0)
            ps[i] = ps[i-1]+arr[i];
        else
            ps[i] = arr[0];
    }
    vector<ll> fact;
    for(ll i=1; i*i <= s; i++)
    {
        if(i*i != s && s%i == 0)
        {
            fact.pb(i);
            fact.pb(s/i);
        }
        if(i*i == s)
            fact.pb(i);
    }
    sort(fact.begin(), fact.end());
    int fsz = fact.size();
    for(int i=0; i<fsz; i++)
    {
        if(fact[i] >= maxel && binary_search(ps.begin(), ps.end(), fact[i]))
            cout<<fact[i]<<" "<<(s/fact[i])<<endl;
    }
	return 0;
}
