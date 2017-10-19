#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

int main() {
    FIO
    map<char,int> pos;
    for(char i='a'; i<='z'; i++)
        pos[i] = (i-'a')+1;
    string s;
    cin>>s;
    int curr = 1, moves=0;
    for(int i=0; i<s.length(); i++)
    {
        int m1, m2;
        m1 = (pos[s[i]] > curr)?(pos[s[i]]-curr):(curr-pos[s[i]]);
        m2 = min(26-pos[s[i]], (26+pos[s[i]])%26)+min(curr,26-curr);
        moves += min(m1,m2);
        curr = pos[s[i]];
    }
    cout<<moves<<endl;
	return 0;
}
