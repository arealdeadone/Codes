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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n&1)
		{
			for(int i=1; i<n-2; i++)
			{
				if(i&1)
					cout<<(i+1)<<" ";
				else
					cout<<(i-1)<<" ";
			}
			cout<<n-1<<" "<<n<<" "<<n-2<<endl;
		}
		else
		{
			for(int i=1; i<=n; i++)
			{
				if(i&1)
					cout<<(i+1)<<" ";
				else
					cout<<(i-1)<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}

