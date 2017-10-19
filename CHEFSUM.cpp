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
		ll arr[n],pre[n],suf[n];
		for(int i=0; i<n; i++)
			cin>>arr[i];
		pre[0] = arr[0];
		for(int i=1; i<n; i++)
			pre[i] = arr[i]+pre[i-1];
		suf[0] = pre[n-1];
		for(int i=1; i<n; i++)
			suf[i] = suf[i-1] - arr[i-1];
		
		ll mini = 1e12, index = -1;
		for(int i=0; i<n; i++)
		{
			if(pre[i]+suf[i] < mini)
			{
				mini = (pre[i]+suf[i]);
				index = i;
			}
		}
		cout<<(index+1)<<endl;
	}
	return 0;
}

