#include <bits/stdc++.h>
#include <unordered_map>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define TEST(x) cin>>x; while(x--)
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
	int t;
	TEST(t)
	{
		unordered_map< ll, pair<ll,ll> > cnt;
		int n;
		TEST(n)
		{
			ll a,b;
			cin>>a>>b;
			if(a != b)
			{
				cnt[a].first = cnt[a].first? cnt[a].first+1 : 1;
				
				cnt[b].second = cnt[b].second? cnt[b].second + 1 : 1; 
			}
		}
		unordered_map< ll, pair<ll,ll> >::iterator i;
		ll fcnt = 0;
		for(i = cnt.begin(); i != cnt.end(); i++)
			fcnt += (i->second.first * i->second.second);
		cout<<fcnt<<endl;
	}
	return 0;
}

