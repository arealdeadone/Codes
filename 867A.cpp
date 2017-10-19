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
	string s;
	cin>>s;
	int sf = 0, fs = 0;
	for(int i=1; i<n; i++)
	{
		if(s[i-1] == 'S' && s[i] == 'F')	sf++;
		if(s[i-1] == 'F' && s[i] == 'S')	fs++;
	}
	cout<<((sf > fs)?"YES":"NO")<<endl;
	return 0;
}

