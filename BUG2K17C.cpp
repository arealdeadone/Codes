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
	TEST
	{
		int n;
		cin>>n;
		string opr;
		cin>>opr;
		ld res;
		cin>>res;
		for(int i=0; i<n; i++)
		{
			ld inp;
			cin>>inp;
			switch(opr[i])
			{
				case '+': res += inp; break;
				case '-': res -= inp; break;
				case '*': res *= inp; break;
				case '/': res /= inp; break;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

