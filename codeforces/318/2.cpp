using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
 long long int GCD(long long int a, long long int b)
{
   if (b==0) return a;
   return GCD(b,a%b);
}


int main()
{
	int i,j,k,l,n,flag=0,tmp,x,ans=1,flag2=0;
	vector<int> arr;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	ans=GCD(arr[0],arr[1]);
	
	for(i=2;i<n;i++)
	{
		ans=GCD(arr[i],ans);
	}
	for(i=0;i<n;i++)
	{
		tmp=arr[i]/ans;
		flag=0;
		while(tmp>1)
		{

			if(tmp%2==0)
				tmp=tmp/2;
			if(tmp%3==0)
				tmp=tmp/3;
			if(tmp%2!=0 && tmp%3!=0)
			{
				flag=1;
				break;
			}
			
		}
		if(flag==1 && tmp>1)
			{
				flag2=1;
				break;
			}
	}


	if(flag2==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

return 0;	
}