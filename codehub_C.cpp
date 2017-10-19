#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define TEST int t; cin>>t; while(t--)
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef pair<int,int> ii;
typedef vector<int,int> vii;
typedef vector< vector<int> > vvi;

ll ans = 0;


int main()
{
	FIO
	ll n,s;
	cin>>n>>s;
	while(n > s/2)
	{
		if(n==1 && s==1)
		break;
		if(n==0||s==0)
		break;
		{
			n -= 2;
			s -= 1;
			ans++;
		}
		if(n==1 && s==1)
		break;
		
	}
	while(s > n/2)
	{
		if(n==1 && s==1)
		break;
		if(n==0||s==0)
		break;
		n--;
		s -= 2;
		ans++; 
		if(n==1 && s==1)
		break;
		if(n==0||s==0)
		break;
	}
	cout<<ans<<endl;
	return 0;
}

