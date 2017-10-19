#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int md = 1000000007;

inline void add(int &a, int b) {
  a += b;
  if (a >= md) {
    a -= md;
  }
  if(a < 0)
    a += md;
}

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

int n, q;
int tmat[301][301], mmat[301][301], premat[301][301][81];
int f[301], e[301];
llu mxn = 1e18;
map<int,int> memo;

void mult(int m[301][301], int p[301][301], int sz)
{
    int ans[301][301];
    memset(ans, 0, sizeof ans);
    #pragma omp parallel
    for(int i=1; i<=sz; i++)
    {
        for(int j=1; j<=sz; j++)
        {
            for(int k=1; k<=sz; k++)
            {
                add(ans[i][j], mul(m[i][k], p[k][j]));
            }
        }
    }
    memcpy(m, ans, sizeof ans);
}

void mult(int m[301][301][81], int p[301][301][81], int sz, int c)
{
    int ans[301][301][81];
    memset(ans, 0, sizeof ans);
    for(int i=1; i<=sz; i++)
    {
        for(int j=1; j<=sz; j++)
        {
            for(int k=1; k<=sz; k++)
            {
                add(ans[i][j][c], mul(m[i][k][c-1], p[k][j][c-1]));
            }
        }
    }
    memcpy(m, ans, sizeof ans);
}

void precomp()
{
    int c = 1;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            premat[i][j][c] = tmat[i][j];
    while(mxn)
    {
        mult(premat,premat,n,c+1);
        c++;
        mxn >>= 1;
    }
}

void matexpo(llu po)
{
	if(po == 1) return;
    int cx = 1;
    int tp[301][301];
    while(po)
    {
        if(po&1)
        {
        	memset(tp, 0, sizeof tp);
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    for(int l=1; l<=n; l++){
                        add(tp[i][j], mul(premat[i][l][cx],tmat[l][j]));

                    }
                }
            }
            memcpy(tmat, tp, sizeof tp);
        }
        cx++;
        po >>= 1;
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

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>q;
        f[0] = n; e[0] = 1;
        memo.clear();
        for(int i=1; i<=n; i++)
            cin>>f[i];
        for(int k=1; k<=n; k++)
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
        memset(tmat, 0, sizeof tmat);
        tmat[1][1] = e[1];
        for(int i=2; i<=n; i++)
        {
            if((i-1)&1)
                tmat[1][i] =  (-1*e[i]);
            else
                tmat[1][i] =  e[i];
            tmat[i][i-1] = 1;
        }
        memcpy(mmat, tmat, sizeof tmat);
        // precomp();
        bool didpc = false;
        llu arx[q];
        for(int i=0; i<q; i++)
        {
            cin>>arx[i];
            if(arx[i] > 5000 && !didpc)
            {
                precomp();
                didpc = true;
            }

        }
        for(int z=0; z<q; z++)
        {
            if(arx[z] <= 5000)
                cout<<pk(arx[z])<<" ";
            else
            {
                matexpo(arx[z]-n);
                int ans = 0;
                for(int i=1; i<=n; i++)
                    add(ans, mul(tmat[1][i],f[n-i+1]));
                cout<<ans<<" ";
                memcpy(tmat, mmat, sizeof mmat);
            }
        }
        cout<<endl;
    }
}
