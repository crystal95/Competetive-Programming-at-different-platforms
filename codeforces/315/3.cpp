using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include<math.h>
#define x 10000007	
bool * make_sieve(int n)
{
	long long int i,j,m=sqrt(x);
	bool * sv= new bool[n];
	for(i=0;i<=n;i++)
		sv[i]=true;
	sv[0]=sv[1]=false;
	for(i=2;i<=m;i++)
	{
		if(sv[i])
		{
			for(j=i*i;j<=n;j+=i)
			{
				sv[j]=false;
			}
		}
	}
	return sv;

}
long long int chk(long long int n)
{
	long long int tmp=n,z=0;
	while(n>0)
	{

		z=z*10+(n%10);
		n=n/10;
	}
	if(tmp==z)
		return 1;
	else 
		return 0;
}
int main()
{
	long long int i,j,k,l,n,cnt1=0,cnt2=0, ans=-1,p,q;
	cin>>p>>q;
	bool* prime = make_sieve(x);
	for(i=1;i<=x;i++)
	{
		if(prime[i])
			cnt1++;

		if(chk(i))
			cnt2++;

		if(q*cnt1<=p*cnt2)
			ans=i;
	}
	if(ans==-1)
		cout<<"Palindromic tree is better than splay tree"<<endl;
	else
		cout<<ans<<endl;
	
}
	
	