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
	while(1)
	{
		int k;
		cin>>k;
		if(!k)
			break;
		
		int n,m;
		cin>>n>>m;
		while(k--)
		{
			int x,y;
			cin>>x>>y;
			if(x == n || y == m)
				cout<<"divisa"<<endl;
			else if( x > n && y > m)
				cout<<"NE"<<endl;
			else if( x < n && y > m)
				cout<<"NO"<<endl;
			else if( x > n && y < m)
				cout<<"SE"<<endl;
			else
				cout<<"SO"<<endl;
		}
	}
	return 0;
}

