#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(100000,1);
    v[0]=v[1]=0;;
    for(int j=2;j*2<100000;j++)
        v[2*j]=0;
    for(int i=3;i<100000;i=i+2)
    {
        if(v[i]==1)
            for(int j=2;i*j<100000;j++)
                v[i*j]=0;
    }
    cout<<'{';
    for(int i=0; i<100000; i++)
        if(v[i])
            cout<<i<<',';
    cout<<'}';
    return 0;
}
