#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,count=0,flag=0,flag1=0,x=0;
	int n,m,first;
	cin>>n>>m>>k;
	first=n*m-(k-1)*2;
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			for(j=1;j<=m;j++)
			{
				if(flag==0 && x==0)
				{	cout<<first<<" ";
					x=1;
				}
				if(flag1==1 && flag==1)
				{
					cout<<'2'<<" ";
					flag1=0;
				}
				cout<<i<<" "<<j<<" ";
				count++;
				if(count==first && flag==0)
				{
					count=0;
					flag=1;
					flag1=1;
					cout<<endl;
				}
				if(count==2 && flag==1)
				{
					flag1=1;
					cout<<endl;
					count=0;
				}
			}
		}
		else
		{
			for(j=m;j>=1;j--)
			{
				if(flag==0 && x==0)
				{	cout<<first<<" ";
					x=1;
				}
				if(flag1==1 && flag==1)
				{
					cout<<'2'<<" ";
					flag1=0;
				}
				cout<<i<<" "<<j<<" ";
				count++;
				if(count==first && flag==0)
				{
					count=0;
					flag=1;
					flag1=1;
					cout<<endl;
				}
				if(count==2 && flag==1)
				{
					flag1=1;
					cout<<endl;
					count=0;
				}
			}
		}
	}
	return 0;
}

