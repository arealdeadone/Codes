#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

const int md = 1000000007;

inline int mul(int a, int b) {
  return (long long)a * b % md;
}

inline int power(int a, int b) {
  int res = 1;
  while (b > 0) {
    if (b & 1) {
      res = mul(res, a);
    }
    b >>= 1;
    a = mul(a, a);
  }
  return res;
}

inline int inv(int a) {
  return power(a, md - 2);
}

vector<int> e, f;
int n,Q;
map<int,int> memo;

void ek(int x)
{
    for(int k=1; k<=x; k++)
    {
        int en = 0;
        for(int i=1; i<=k; i++)
        {
            if((i-1)%2)
                en = ((en%md - mul(e[k-i],f[i]))+md)%md;
            else
                en = (en%md + mul(e[k-i],f[i]))%md;
        }
        e[k] = mul(en%md,inv(k));
    }
}

int pk(int x)
{
    if(x<=n)    return f[x];
    if(memo[x]) return memo[x];
    int px = 0;
    for(int i=x-n; i<=x-1; i++)
    {
        if((x-1+i)%2)
            px = ((px%md - mul(e[x-i],pk(i)))+md)%md;
        else
            px = (px%md + mul(e[x-i],pk(i)))%md;
    }
    memo[x] = px;
    return px;
}

int main() {
    FIO
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>Q;
        e.clear(); f.clear(); memo.clear();
        e.resize(n+1); f.resize(n+1);
        e[0] = 1; f[0] = n;
        for(int i=1; i<=n; i++)
            cin>>f[i];
        ek(n);
        while(Q--)
        {
            int k,ans;
            cin>>k;
            ans = pk(k);
            cout<<ans<<" ";
        }
        cout<<endl;
    }
	return 0;
}
