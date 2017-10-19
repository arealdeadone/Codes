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
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		int m1,m2;
		m1 = (s2[3]-'0')*10 + (s2[4]-'0');
		m2 = (s3[3]-'0')*10 + (s3[4]-'0');
		cout<<(m1-m2)<<endl;
	}
	return 0;
}

