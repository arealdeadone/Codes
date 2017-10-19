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
	int n,x;
	cin>>n>>x;
	vector<int> arr(n);
	vector<bool> present(101,false);
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		present[arr[i]] = true;
	}
	sort(arr.begin(), arr.end());
	int moves = 0;
	if(binary_search(arr.begin(), arr.end(), x))
		moves++;
	for(int i=0; i<x; i++)
	{
		if(!present[i])
			moves++;
	}
	cout<<moves<<endl;
	return 0;
}

