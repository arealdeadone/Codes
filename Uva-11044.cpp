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
		ll n,m;
		cin>>n>>m;
		n -= 2;
		if (n % 3 == 0)
			n /= 3;
		else
			n = n / 3 + 1;

		m -= 2;
		if (m % 3 == 0)
			m /= 3;
		else
			m = m / 3 + 1;

		cout << n * m << endl;
	}
	return 0;
}

