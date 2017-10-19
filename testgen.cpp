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
//	FIO
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
//	int t;
//    cin>>t;
//    while(t--)
//    {
//        int n,k;
//        cin>>n>>k;
//        vector<int> arr(n);
//        for(int i=0; i<n; i++)
//            cin>>arr[i];
//        int mxel = INT_MIN;
//        for(int i=0; i<n; i++)
//            if(mxel < arr[i])
//                mxel = arr[i];
//        vector<bool> cmp(mxel+1, false);
//        for(int i=0; i<n; i++)
//            cmp[arr[i]] = true;
//        for(int i=0; i<=mxel && k; i++)
//        {
//            if(!cmp[i])
//            {
//                cmp[i] = true;
//                k--;
//            }
//        }
//        while(k>0)
//        {
//            cmp.pb(true);
//            k--;
//        }
//        int i, sz=cmp.size();
//        for(i=0; i<sz; i++)
//            if(!cmp[i])
//                break;
//        cout<<(cmp[i]?(i+1):i)<<endl;
//    }
//	int t = 10;
//	cout<<t<<endl;
//	srand(time(NULL));
//	while(t--)
//	{
//		int n = rand() % 100000 + 1;
//		int k = rand() % 100000 + 1;
//		cout<<n<<" "<<k<<endl;
//		for(int i=0; i<n; i++)
//			cout<<( rand() % 200000 + 100000 )<<" ";
//		cout<<endl; 
//	}
	cout<<1e5<<endl;
	for(int i=0; i<1e5; i++)
		cout<<(i&1);
	return 0;
}

