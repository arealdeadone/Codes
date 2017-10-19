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
		int n, min = 100, max = -1, inp;
		cin>>n;
		while(n--)
		{
			cin>>inp;
			if(inp < min)	min = inp;
			if(inp > max)	max = inp;
		}
		cout<<(2*(max-min))<<endl;
	}
	return 0;
}

