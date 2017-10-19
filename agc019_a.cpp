#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
typedef pair<int,int> ii;
typedef vector<int,int> vii;
typedef vector< vector<int> > vvi;

int main()
{
	FIO
	ll q,h,s,d,n;
	cin>>q>>h>>s>>d>>n;
	ll ans = ((n/2)*min(8*q,min(4*h,min(2*s,d)))) + ((n%2)*min(4*q,min(2*h,s)))
	cout<<ans<<endl;
	return 0;
}
