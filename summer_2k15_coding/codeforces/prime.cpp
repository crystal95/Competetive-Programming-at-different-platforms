#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,l,flag,count=0;
	for(i=2;i<=100005;i++)
	{
		flag=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<i<<", ";
			count++;
		}




	}
	cout<<count;
	return 0;
}
