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
//	freopen("out.out", "r", stdin);
//	TEST
//	{
		int n;
		cin>>n;
		string s;
		cin>>s;
	//	cout<<n<<endl;
	//	cout<<s<<endl;	
		stack<int> st;
		st.push(-1);
	//	st.push(0);
		int ans = 0;
		for(int i=0; i<n; i++)
		{
			if(s[i] == s[st.top()]||st.top() == -1)
				st.push(i);
			else
			{
				st.pop();
//				if(!st.empty())
					ans = max(ans, i-st.top());
//				else
//					st.push(i);
			}
		}
		cout<<ans<<endl;
//	}
	return 0;
}
