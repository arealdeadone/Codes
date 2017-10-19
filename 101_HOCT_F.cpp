#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.size();
    if(s[len-1]== 'E')
        cout<<(len-1)<<endl;
    else
    {
        if(s[0] == 'E')
            cout<<0<<endl;
        else
        {
            int idx = -1;
            int l=0, u=len-1, mid;
            while(l<=u)
            {
                mid = (l+u)/2;
                if(s[mid] == 'E')
                {
                    if(len-1 % 2 && mid+1 == 'E')
                        idx = mid+1;
                    else
                        idx = mid;
                    break;
                }
                l = mid+1;
            }
            if(idx == -1)
            {
                l=0; u=len-1; mid=-1;
                while(l<=u)
                {
                    mid = (l+u)/2;
                    if(s[mid] == 'E')
                    {
                        if(len-1 % 2 && mid+1 == 'E')
                            idx = mid+1;
                        else
                            idx = mid;
                        break;
                    }
                    u = mid-1;
                }
                cout<<idx<<endl;
            }
            else
                cout<<idx<<endl;
        }
    }
}
