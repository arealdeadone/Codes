#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

struct node
{
    long f2,f5,f0;
    node() { f2 = 0; f5=0; f0=0; }
    node operator+(const node &nv)
    {
        node rv;
        rv.f2 = this->f2 + nv.f2;
        rv.f5 = this->f5 + nv.f5;
        rv.f0 = min(rv.f2,rv.f5);
        return rv;
    }
    void operator=(const node &nv)
    {
        f2 = nv.f2;
        f5 = nv.f5;
        f0 = nv.f0;
    }
} tree[1000100];

vector<llu> A;

node factorize(llu n)
{
    node retval;
    while(n%5==0)
    {
        n /= 5;
        retval.f5++;
    }
    while(n%2 == 0)
    {
        n /= 2;
        retval.f2++;
    }
    retval.f0 = min(retval.f5,retval.f2);
    return retval;
}

void build(llu pos, llu low, llu high)
{
    if(low == high)
    {
    tree[pos] = factorize(A[low]);
    return;
    }
    llu mid = (high+low)/2;
    build(2*pos+1, low, mid);
    build(2*pos+2, mid+1, high);
    tree[pos] = (tree[2*pos+1] + tree[2*pos+2]);
}

void update(llu pos, llu low, llu high, llu l, llu r, node val)
{
    if(low > high || r < low || l > high)
        return;
    if(low == high)
    {
        tree[pos] = tree[pos] + val;
        return;
    }
    llu mid = (low + high)/2;
    update(2*pos+1, low, mid, l, r, val);
    update(2*pos+2, mid+1, high, l, r, val);
    tree[pos] = tree[2*pos+1] + tree[2*pos+2];
}

void update2(llu pos, llu low, llu high, llu l, llu r, llu y)
{
    if(low > high || r < low || l > high)
        return;
    if(low == high)
    {
        node n = factorize((low - l +1)*y);
        tree[pos] = n;
        return;
    }
    llu mid = (low + high)/2;
    update2(2*pos+1, low, mid, l, r, y);
    update2(2*pos+2, mid+1, high, l, r, y);
    tree[pos] = tree[2*pos+1] + tree[2*pos+2];
}

node query(llu pos, llu low, llu high, llu l, llu r)
{
    if(low > high || r < low || high < l)
    {
        node n;
        return n;
    }
    if(l <= low && high <= r)
        return tree[pos];
    llu mid = (low+high)/2;
    node p1 = query(2*pos+1, low, mid, l, r);
    node p2 = query(2*pos+2, mid+1, high, l, r);
    return p1+p2;
}

int main()
{
    llu t;
    cin>>t;
    while(t--)
    {
        llu n,m;
        cin>>n>>m;
        A.resize(n);
        for(llu i=0; i<n; i++)
            cin>>A[i];
        build(0,0,n-1);
        llu rsum = 0;
        while(m--)
        {
            llu ty,l,r,p;
            cin>>ty;
            if(ty == 1)
            {
                cin>>l>>r>>p;
                node v = factorize(p);
                update(0, 0, n-1, l-1, r-1, v);
            }
            if(ty == 2)
            {
                cin>>l>>r>>p;
                update2(0, 0, n-1, l-1, r-1, p);
            }
            if(ty == 3)
            {
                cin>>l>>r;
                node ans = query(0, 0, n-1, l-1, r-1);
                rsum += ans.f0;
            }
        }
        cout<<rsum<<endl;
    }
    return 0;
}
