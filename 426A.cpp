#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
	FIO
	map<char,int> charmap;
	charmap['^'] = 0; charmap['>'] = 1; charmap['v'] = 2; charmap['<'] = 3;
	char c1,c2;
	cin>>c1>>c2;
	int n;
	cin>>n;
	n %= 4;
	int diff = abs(charmap[c2] - charmap[c1]);
	if(diff == 2)
	{
		cout<<"undefined"<<endl;
	}
	else  if(n == diff)
		cout<<"cw"<<endl;
	else
		cout<<"ccw"<<endl;
	return 0;
}
