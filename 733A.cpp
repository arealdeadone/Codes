/* Includes, Defines and macros */
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vb vector<bool>
#define ii pair<int,int>
#define vii vector< ii >
#define vvi vector< vi >
#define mii map<int,int>
#define mll map<ll,ll>
#define vit vi::iterator
#define viit vii::iterator
#define vvit vvi::iterator
#define ffind(var,val) var.find(val)
#define vec(x) vector< x >
#define sz(x) x.size()
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
/* Typedefs */

typedef long long ll;
typedef unsigned long long llu;
typedef long double ld;



/* Actual Code */

bool isVowel(char c)
{
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')
        return true;
    return false;
}


int main(int argc, char const *argv[])
{
    FIO
    string s;
    cin>>s;
    int minj = 0;
    int prevv = 0, szs = sz(s);
    for(int i=0; i<szs; i++){
        if(isVowel(s[i]))
        {
            minj = max(minj, (i-prevv));
            prevv = i;
        }
    }
    if(!minj)
        minj++;
    cout<<minj<<endl;
    return 0;
}
