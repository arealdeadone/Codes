#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

bool cmp(int i, int j)
{
    return i>j;
}

int main() {
    FIO
    int n,m,k;
    cin>>n>>m>>k;
    map<int,int> colmap;
    for(int i=1; i<=n; i++)
    {
        int ci;
        cin>>ci;
        colmap[i] = ci;
    }
    map<pair<int,int>,bool> same;
    vector<int> freq(n+1,0);
    vector< pair<int,int> > wear(m);
    int c = 0;
    for(int i=0; i<m; i++)
    {
        int li, ri;
        cin>>li>>ri;
        freq[li]++;
        freq[ri]++;
        wear[i] = (mp(li,ri));
    }
    int mx = -1, idx=-1;
    for(int i=1; i<=n; i++)
    {
        if(mx < freq[i])
        {
            mx = freq[i];
            idx = i;
        }
    }
    cout<<c<<endl;
    return 0;
}
