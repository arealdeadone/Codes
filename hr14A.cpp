#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0);

using namespace std;

long long reverse(long long num){
    long long revn=0;
    string ts;
    while(num){
        char c = '0';
        c += num%10;
        ts.pb(c);
        num /= 10;
    }
    for(int i=0; i<ts.size(); i++){
        revn = revn*10 + (ts[i]-'0');
    }
    return revn;
}

int main() {
    long long i,j,k,d,ans=0;
    cin>>i>>j>>k;
    for(d=i; d<=j; d++){
        long long rev = reverse(d);
        if(abs(rev-d)%k == 0)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
