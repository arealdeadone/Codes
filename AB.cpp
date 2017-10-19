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

class AB
{
	public:
		string createString(int n, int k)
		{
			string s = "";
			int i; bool flag = false; int cn=n;
			while(cn>=0)
			{
				for(i = 0; i<=cn/2; i++)
				{
					int j = (cn-i);
					if(i*j == k)
					{
						flag = true;
						break;
					}
				}
				if(flag)
					break;
				cn--;
			}
			
			if(!flag)
				return s;
			
			for(int j=0; j<i; j++)
				s += "A";
			
			for(int j=i; j<cn; j++)
				s += "B";
			string ts = "";
			for(int j=0; j<(n-cn); j++)
				ts += "B";
			s = ts+s;
			return s;
		}
};

int main()
{
	int n,k;
	cin>>n>>k;
	AB ab;
	string op = ab.createString(n,k);
	cout<<op<<endl;
}

