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
bool prime[1000007];

void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
 
    for (int p=2; p*p<=1000006; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=1000006; i += p)
                prime[i] = false;
        }
    }
}

int main()
{
	FIO
	sieve();
	int x,y,k;
	cin>>x>>y>>k;
	vector<int> dist;
	int prevp = -1;
	for(int i=x; i<=y; i++)
	{
		if(prime[i])
		{
			if(prevp == -1)
			{
				dist.pb(i-x);
				prevp = i;
			}
			else
			{
				dist.pb(i-prevp-1);
				prevp=i;
			}
		}
	}
	if(y != prevp && prevp != -1)
		dist.pb(y-prevp);
	sort(dist.begin(),dist.end());
	reverse(dist.begin(),dist.end());
	ll ans = 0;
//	for(int i=0; i<dist.size(); i++)
//		cout<<dist[i]<<" ";
//	cout<<endl;
	int sz = dist.size();
	if(sz < k)
	{
		cout<<-1<<endl;
		return 0;
	}
	for(int i=0; i<k; i++)
		ans += dist[i];
	
	cout<<(ans+k)<<endl;
	return 0;
}

