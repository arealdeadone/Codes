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
	int n,k,x;
	cin>>n>>k>>x;
	vector<int> arr(n);
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int mt = k*x;
	for(int i=0; i<n-k; i++)
		mt += arr[i];
	cout<<mt<<endl;
	return 0;
}

