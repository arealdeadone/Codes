#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

vector<int> cst;

int maxSubarray()
{
    int sz = cst.size();
    int mxsf = 0, mxeh = 0;
    for(int i=0; i<sz; i++)
    {
        mxeh = mxeh + cst[i];
        if(mxeh < 0)
            mxeh = 0;
        if(mxsf < mxeh)
            mxsf = mxeh;
    }
    return mxsf;
}

int main()
{
    FIO
    while(true)
    {
        int n;
        cin>>n;
        if(cin.eof())
            break;
        int pdc;
        cin>>pdc;
        cst.clear();
        cst.resize(n);
        for(int i=0; i<n; i++)
        {
            cin>>cst[i];
            cst[i] -= pdc;
        }
        int ans = maxSubarray();
        cout<<ans<<endl;
    }
    return 0;
}
