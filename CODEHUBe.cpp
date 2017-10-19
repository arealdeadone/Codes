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
typedef vector<int,int> vii;
typedef vector< vector<int> > vvi;
 
// function to get the smallest digit in 'num'
// which is greater than 0
char getSmallDgtGreaterThanZero(string num, int n)
{
    // 's_dgt' to store the smallest digit
    // greater than 0
        char s_dgt = '9';
     
    for (int i=0; i<n; i++)
        if (num[i] < s_dgt && num[i] != '0')
            s_dgt = num[i];
     
    // required smallest digit in 'num'
    return s_dgt;
}
 
// function to get the kth smallest number
string kthSmallestNumber(string num, int k)
{
    // FIND SMALLEST POSSIBLE NUMBER BY SORTING
    // DIGITS
 
    // count frequency of each digit
    int freq[10];
    string final_num = "";
 
    memset(freq, 0, sizeof(freq));
    int n = num.size();
 
    // counting frequency of each digit
    for (int i = 0; i < n; i++)
        freq[num[i] - '0']++;
     
    // get the smallest digit greater than 0
    char s_dgt = getSmallDgtGreaterThanZero(num, n);    
     
    // add 's_dgt' to 'final_num'
    final_num += s_dgt;
     
    // reduce frequency of 's_dgt' by 1 in 'freq'
    freq[s_dgt - '0']--;
     
    // add each digit according to its frequency
    // to 'final_num'
    for (int i=0; i<10; i++)
        for (int j=1; j<=freq[i]; j++)
            final_num += (char)(i+48);    
     
    // FIND K-TH PERMUTATION OF SMALLEST NUMBER
    for (int i=1; i<k; i++)
      next_permutation(final_num.begin(), final_num.end());
     
    // required kth smallest number
    return final_num;
}
 
// Driver program to test above
int main()
{
	FIO
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		ll m;
		cin>>m;
		cout<<kthSmallestNumber(n,m)<<endl;
			
	}
    return 0;
}
