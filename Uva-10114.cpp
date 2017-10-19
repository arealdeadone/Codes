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
//	while(1)
//	{
//		int tenure,dr;
//		cin>>tenure;
//		if(tenure < 0)	break;
//		ld dp, la;
//		cin>>dp>>la>>dr;
//		vector<pair<int, double> > dep(dr);
//		for(int i=0; i<dr; i++)
//			cin>>dep[i].first>>dep[i].second;
//		
//		/*for(int i=0; i<dr; i++)
//			cerr<<dep[i].first<<" "<<dep[i].second<<endl;
//		cerr<<endl;*/
//		ld cv = dp+la;
//		cv -= (cv * dep[0].second);
//		ld emi = la/(double)tenure;
//		int i,k;
//		k = dep[1].first == 1 ? 1 : 0;
//		for(i=1,k; cv <= la; i++)
//		{
////			cerr<<dep[k].first<<" "<<dep[k].second<<endl;
////			cerr<<cv<<" "<<la<<endl<<endl;
//			cv -= (cv * dep[k].second);
//			la -= emi;
//			if(dep[k+1].first == i+1 && k != dr-1)	k++;
//		}
//		i--;
//		cout<<i<<" "<<(i!=1?"months":"month")<<endl;
//	}
	set<int> a;
	a.insert(500); a.insert(20); a.insert(-1);
	for(auto i=a.begin(); i != a.end(); i++)
		cout<<(*i)<<" ";
	return 0;
}

