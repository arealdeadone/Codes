#include <bits/stdc++.h>
#define mp  make_pair
#define pb  push_back
#define ii  pair<int,int>
#define vi  vector<int>
#define vii vector<ii>
#define mii map<int,int>
#define mld map<ll,ll>
#define vvi vector< vi >
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
const long long A=100000000000000LL,N=228228;

long long a[N],k,o,i,j,n,m;
int main(){
	cin>>n;
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	k=1;
	for(i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
            k++;
        else
            o=max(o,k),k=1;
    }
	o=max(o,k);
	cout<<o;
	return 0;
}
