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
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<int> al(26, 0);
	int sz = s.size();
	for(int i=0; i<sz; i++)
		al[(s[i]-'a')]++;
	for(int i=0; i<26; i++)
		if(al[i] > k) return 0*puts("NO\n");
	puts("YES\n");
	return 0;
}

