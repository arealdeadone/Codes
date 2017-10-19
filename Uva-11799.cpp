#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define gcd __gcd
#define uinf 0xFFFFFFFF
#define uinfl 0xFFFFFFFFFFFFFFFF
#define TEST int t; cin>>t; while(t--)
#define rep(i,a,b) for(int i=(int)a; i<b; i++)
#define repn(i,n)  for(int i=0; i<n; i++)
#define linp(a,n)  vector<int> a(n); for(int i=0; i<n; i++) cin>>arr[i];
#define per(i,a,b) for(int i=b; i >= a; i--)
#define all(x) ((x).begin(), (x).end())
#define sz(x) (x).size()
#define DEBUG_ARR(a) for(int i=0; i<sz(a); i++) cerr<<a[i]<<" "; cerr<<endl;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector< vector<int> > vvi;

int main()
{
	FIO
	int tt = 1;
	TEST
	{
		string s;
		char h;
		cin>>h;
		getline(cin, s);
		s.pb(' ');
		vi arr;
		int temp = 0;
		bool prevsp = true;
		int ssz = sz(s);
		repn(i,ssz)
		{
			if(s[i] == ' ')
			{
				if(prevsp) continue; else arr.pb(temp);
				temp = 0;
				prevsp = true;
			}
			else
			{
				prevsp = false;
				temp *= 10;
				temp += (s[i]-'0');
			}
		}
		sort(arr.rbegin(), arr.rend());
		cout<<"Case "<<tt<<": "<<arr.front()<<endl;
		tt++;
	}
	return 0;
}

