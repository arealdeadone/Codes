#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0);
using namespace std;


int main() {
    FIO
    freopen("test.in", "w", stdout);
	time_t secs;
	time(&secs);
	srand(secs);
	for(int i=0; i<20; i++)
	{
		int n,m;
		n = rand()%1000 + 1;
		m = rand()%100 + 1;
		cout<<n<<" "<<m<<endl;
		cerr<<n<<" "<<m<<endl;
		for(int j=0; j<n; j++)
		{
			for(int k=0; k<m; k++)
			{
				int num = rand()%10000 - 10000;
				cout<<num<<" ";
				cerr<<num<<" ";
			}
			cout<<endl;
			cerr<<endl;
		}
	}
	return 0;
}
