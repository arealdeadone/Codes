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
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		vector<ll> num(10,0);
		int sz = s.size();
		for(int i=0; i<sz; i++)
			num[(s[i]-'0')]++;
		if(num[6]>=1)
		{
			if(num[5]>=1)
				cout<<'A';
			if(num[6]>=2)
				cout<<'B';
			if(num[7]>=1)
				cout<<'C';
			if(num[8]>=1)
				cout<<'D';
			if(num[9]>=1)
				cout<<'E';
		}
		if(num[7]>=1)
		{
			if(num[0]>=1)
				cout<<'F';
			if(num[1]>=1)
				cout<<'G';
			if(num[2]>=1)
				cout<<'H';
			if(num[3]>=1)
				cout<<'I';
			if(num[4]>=1)
				cout<<'J';
			if(num[5]>=1)
				cout<<'K';
			if(num[6]>=1)
				cout<<'L';
			if(num[7]>=2)
				cout<<'M';
			if(num[8]>=1)
				cout<<'N';
			if(num[9]>=1)
				cout<<'O';
		}
		if(num[8]>=1)
		{
			if(num[0]>=1)
				cout<<'P';
			if(num[1]>=1)
				cout<<'Q';
			if(num[2]>=1)
				cout<<'R';
			if(num[3]>=1)
				cout<<'S';
			if(num[4]>=1)
				cout<<'T';
			if(num[5]>=1)
				cout<<'U';
			if(num[6]>=1)
				cout<<'V';
			if(num[7]>=1)
				cout<<'W';
			if(num[8]>=2)
				cout<<'X';
			if(num[9]>=1)
				cout<<'Y';
		}
		if(num[9] >=1 && num[0] >=1)
			cout<<'Z';
		cout<<endl;
		
	}
	return 0;
}

