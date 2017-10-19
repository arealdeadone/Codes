#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef unsigned long long llu;
typedef pair<int,int> ii;
typedef vector<int,int> vii;
typedef vector< vector<int> > vvi;

int main()
{
	FIO
	int r,d;
	cin>>r>>d;
	int n;
	cin>>n;
	int ttl = 0;
	while(n--)
	{
		int xi,yi,ri;
		cin>>xi>>yi>>ri;
		double dist = sqrt(xi*xi + yi*yi);
		if((dist+ri) <= r && (dist - ri) >= (r-d))
			ttl++;
	}
	cout<<ttl<<endl;
	return 0;
}

