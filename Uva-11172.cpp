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
typedef vector<ii> vii;
typedef vector< vector<int> > vvi;

int main()
{
	FIO
	TEST
	{
		ll a,b;
		cin>>a>>b;
		char opr = a < b ? '<' : a > b ? '>' : '=';
		cout<<opr<<endl;
	}
	return 0;
}

