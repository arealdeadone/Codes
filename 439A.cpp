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
	int n;
	cin>>n;
	vector<int> arr(2*n);
	for(int i=0; i<2*n; i++)
		cin>>arr[i];
	sort(arr.begin(), arr.end());
	int xp=0;
	for(int i=0; i<2*n; i++)
		for(int j=0; j<2*n; j++)
			if(binary_search(arr.begin(), arr.end(), (arr[i]^arr[j])))
				xp++;
	cout<<(xp&1 ? "Koyomi" : "Karen")<<endl;
	return 0;
}

