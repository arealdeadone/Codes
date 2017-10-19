#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

vector<int> arr, psi;
int si = -1, ei = -1;

int maxSubarray()
{
    int mxsf=0, mxeh=0;
    int n = arr.size();
    si = 0;
    for(int i=0; i<n; i++)
    {
        mxeh = mxeh + arr[i];
        if(mxeh < 0)
        {
            mxeh = 0;
            psi.pb(si);
            si = i+1;
        }
        if(mxsf <= mxeh && mxeh)
        {
            mxsf = mxeh;
            ei = i;
        }
    }
    return mxsf;
}
int main()
{
    FIO
    int n;
    cin>>n;
    arr.clear();
    arr.resize(n);
    int c1 = 0, c0 = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr[i] = (arr[i])?-1:1;
    }
    int ans = maxSubarray();
    if(si > ei && ei != -1)
    {
        int i = psi.size()-1;
        while(psi[i] > ei)
            i--;
        si = psi[i];
    }
    if(si > ei)
        si = ei = -1;
    for(int i=0; i<si && si >= 0; i++)
        if(arr[i] == -1)
            ans++;
    for(int i=ei; i<n && ei >= 0; i++)
        if(arr[i] == -1)
            ans++;
    for(int i=si; i<=ei && si >=0 && ei >=0; i++)
        if(arr[i] == -1)
            ans++;
    if(!ans) ans = n-1;
    cout<<ans<<endl;
    return 0;
}
