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
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,d,D;
        cin>>n>>m>>d>>D;
        if(m < n*d || m > n*D || m == 0)
            cout<<-1<<endl;
        else
        {
            int q = (m/n), r = (m%n);
        }
    }
    return 0;
}
