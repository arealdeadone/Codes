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

int main()
{
	FIO
	int n;
	cin>>n;
	vector<bool> poss(101, false);
	vector<int> arr(n), cnt(101,0);
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		poss[arr[i]] = true;
		cnt[arr[i]]++;
	}
	bool posss = true;
	int tcnt = 0;
	for(int i=1; i<=100; i++)
	{
		if(poss[i])
			tcnt++;
	}
	if(tcnt != 2)
		cout<<"NO"<<endl;
	else
	{
		int t1=0, t2=0, it1, it2;
		for(int i=1; i<=100; i++)
		{
			if(cnt[i] && !t1)
			{
				t1 = cnt[i];
				it1 = i;
			}
			else if(cnt[i] && !t2)
			{
				t2 = cnt[i];
				it2 = i;
			}
		}
		if(t1 != t2)
			cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl<<it1<<" "<<it2<<endl;
		}
	}
	return 0;
}

