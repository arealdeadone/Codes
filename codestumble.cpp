// 11 coders - Arvind Rachuri, Tarun Bathwal, Sarthak Mittal
#include <cstdio>
#include <cstring>
#include <cmath>
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
#define f1(i,n) for(auto i=0; i<n; i++)
#define fr(i,s,e) for(auto i=s; i<=e; i++)
#define ffind(var,val) var.find(val)
#define vec(x) vector< x >
#define sz(x) x.size()

typedef long long ll;

int sth(long p)
{
long ptr_const_xor_val_five=p;
long i = 2;if(p == 2)
return 1;
while(i*i<=p)
{
if(ptr_const_xor_val_five%i == 0) return 0;
i++;
}
return 1;
}

int fgh(long int n)
{
long int lon = n;
char strz[8],temp;
for(n=0; lon>0; n++)
{
strz[n] = ((lon%10)+48);
lon/=10;
}
strz[n] = '\0';
for(n=0; strz[n] != '\0'; n++)
{
if(strz[n] != strz[strlen(strz)-1-n])
return 0;
}
return 1;
}
int main(void) {
int test;
scanf("%d", &test);
while(test--)
{
long ds;
scanf("%ld", &ds);
if((ds==1)||(ds==2))
{ printf("%d",2); return 0; }
bool jkl=true;
long lon = ds;

char strz[8],temp;
int i;
for(i=0; lon>0; i++)
{
strz[i] = ((lon%10)+48);
lon/=10;
}
strz[i] = '\0';
for(i=0; strz[i] != '\0' && !jkl; i++)
if(strz[i] != strz[strlen(strz)-1-i])
jkl = !jkl;
if(fgh(ds) && sth(ds))
{
printf("%ld\n", ds);
continue;
}
if(ds%2 == 0) ds++;
else ds+=2;
while(1)
{
if(fgh(ds)&&sth(ds))
{
printf("%ld\n", ds);
break;
}
ds+=2;
}
}
return 0;
}
