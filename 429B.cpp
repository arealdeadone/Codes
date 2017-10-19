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
	int n;
	cin>>n;
	ll sum = 0;
	int nodd = 0;
	vector<int> num(n);
	for(int i=0; i<n; i++)
	{
		cin>>num[i];
		sum += num[i];
		if(num[i] & 1)
			nodd++;
	}
	if(nodd)
		cout<<"First"<<endl;
	else
		cout<<"Second"<<endl;
	return 0;
}

