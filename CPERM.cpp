#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

const int md = 1000000007;

inline void add(int &a, int b) {
  a += b;
  if (a >= md) {
    a -= md;
  }
}

inline int mul(int a, int b) {
  return (long long)a * b % md;
}

inline int power(int a, int b) {
  int res = 1;
  while (b > 0) {
    if (b & 1) {
      res = mul(res, a);
    }
    b >>= 1;
    a = mul(a, a);
  }
  return res;
}

inline int inv(int a) {
  return power(a, md - 2);
}


int main() {
    FIO
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = power(2,n-1);
        ans = ((ans%md - 2%md)+md)%md;
        cout<<ans<<endl;
    }
	return 0;
}

