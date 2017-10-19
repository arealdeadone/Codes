#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    FIO
    int n,k;
    cin>>n>>k;
    vector<int> walk(n);
    for(int i=0; i<n; i++)
        cin>>walk[i];
    int exwalk=0;
    for(int i=0; i<n-1; i++)
    {
        if(walk[i+1]+walk[i] < k)
        {
            exwalk += (k - walk[i+1] - walk[i]);
            walk[i+1] += (k - walk[i+1] - walk[i]);
        }
    }
    cout<<exwalk<<endl;
    for(int i=0; i<n; i++)
        cout<<walk[i]<<" ";
    cout<<endl;
    return 0;
}
