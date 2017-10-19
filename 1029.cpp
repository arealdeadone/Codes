// URI Online Judge Problem 1029 - Basic DP
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

int main()
{
    llu fib[40], fibc[40];
    fibc[0] = fibc[1] = 0;
    fib[0] = 0; fib[1] = 1;
    for(int i=2; i<=39; i++)
        fib[i] = fib[i-1]+fib[i-2];
    for(int i=2; i<=39; i++)
        fibc[i] = fibc[i-1]+fibc[i-2]+2;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        printf("fib(%d) = %llu calls = %llu\n",n ,fibc[n],fib[n]);
    }
    return 0;
}
