#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define endl '\n'
#define gcd __gcd
#define inf 0xFFFFFFFF/2
#define uinf 0xFFFFFFFF
#define infl 0xFFFFFFFFFFFFFFFF/2
#define uinfl 0xFFFFFFFFFFFFFFFF
#define TEST int t; cin>>t; while(t--)
#define rep(i,a,b) for(int i=(int)a; i<b; i++)
#define repn(i,n)  for(int i=0; i<n; i++)
#define linp(a,n)  vector<int> a(n); for(int i=0; i<n; i++) cin>>arr[i];
#define per(i,a,b) for(int i=b; i >= a; i--)
#define all(x) ((x).begin(), (x).end())
#define allr(x) ((x).rbegin(), (x).rend())
#define sz(x) (x).size()
#define DEBUG_ARR(a) for(int i=0; i<sz(a); i++) cerr<<a[i]<<" "; cerr<<endl;
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector< vector<int> > vvi;

int main()
{
//	FIO
//	freopen("Uva-00417.out", "w", stdout);
	map<string, int> wmap;
	string s1 = "a", s2 = "ab", s3 = "abc", s4 = "abcd", s5 = "abcde";
	int num = 1;
	for(int i=0; i<26; i++)
	{
//		cout<<s1<<endl;
//		cout<<"wmap[\""<<s1<<"\"]="<<num<<
		wmap[s1] = num++;
		s1[0]++;
	}
	for(int i=0; s2[0]<='y'; i++)
	{
		for(int j=1; s2[1]<='z'; j++)
		{
//			cout<<s2<<endl;
			wmap[s2] = num++;
			s2[1]++;
		}
		s2[0]++;
		s2[1] = s2[0]+1;
	}
	for(int i=0; s3[0]<='x'; i++)
	{
		for(int j=1; s3[1]<='y'; j++)
		{
			for(int k=2; s3[2]<='z'; k++)
			{
//				cout<<s3<<endl;
				wmap[s3] = num++;
				s3[2]++;
			}
			s3[1]++;
			s3[2] = s3[1]+1;
		}
		s3[0]++;
		s3[1] = s3[0]+1;
		s3[2] = s3[1]+1;
	}
	for(int i=0; s4[0]<='w'; i++)
	{
		for(int j=1; s4[1]<='x'; j++)
		{
			for(int k=2; s4[2]<='y'; k++)
			{
				for(int l=3; s4[3]<='z'; l++)
				{
//					cout<<s4<<endl;
					wmap[s4] = num++;
					s4[3]++;
				}
				s4[2]++;
				s4[3] = s4[2]+1;
			}
			s4[1]++;
			s4[2] = s4[1]+1;
			s4[3] = s4[2]+1;
		}
		s4[0]++;
		s4[1] = s4[0]+1;
		s4[2] = s4[1]+1;
		s4[3] = s4[2]+1;
	}
	for(int i=0; s5[0]<='v'; i++)
	{
		for(int j=1; s5[1]<='w'; j++)
		{
			for(int k=2; s5[2]<='x'; k++)
			{
				for(int l=3; s5[3]<='y'; l++)
				{
					for(int m=4; s5[4]<='z'; m++)
					{
//						cout<<s5<<endl;
						wmap[s5] = num++;
						s5[4]++;
					}
					s5[3]++;
					s5[4]=s5[3]+1;
				}
				s5[2]++;
				s5[3]=s5[2]+1;
				s5[4]=s5[3]+1;
			}
			s5[1]++;
			s5[2]=s5[1]+1;
			s5[3]=s5[2]+1;
			s5[4]=s5[3]+1;
		}
		s5[0]++;
		s5[1]=s5[0]+1;
		s5[2]=s5[1]+1;
		s5[3]=s5[2]+1;
		s5[4]=s5[3]+1;
	}
	string s;
	while(cin>>s)
	{
		if(wmap.find(s) == wmap.end())
			cout<<0<<endl;
		else
			cout<<wmap[s]<<endl;
	}
	return 0;
}

