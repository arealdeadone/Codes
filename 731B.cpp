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
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    bool poss = true;
    int carry = 0;
    for(int i=0; i<n; i++)
    {
        if(!a[i] && carry)
        {
            poss = false;
            break;
        }
        a[i] -= carry;
        carry = (a[i]&1);
    }
    if(carry)
        poss = false;
    cout<<(poss?"YES":"NO")<<endl;
    return 0;
}
