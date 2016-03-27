using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
int main()
{
	double i,a,b,j,k,l,m,n,ans1=0,ans2=0,flag2=0,flag1=0,k1,k2;
	cin>>a>>b;
	k1=double(int((a-b)/(2*b)));
	k2=double(int((a+b)/(2*b)));
	if(a<b)
		cout<<"-1"<<endl;
	else if(a==b)
		printf("%.12f\n",a);
	else{
	if(k1>=1)
	{
		flag1=1;
		ans1=(a-b)/(2*k1);
	}
	if(k2>=1)
	{
		flag2=1;
		ans2=(a+b)/(2*k2);
	}
	if(flag1==0 && flag2==0)
		cout<<"-1"<<endl;
	else
	{
		if(ans1==0)
		printf("%.12f\n",ans2);

		else if(ans2==0)
		printf("%.12f\n",ans1);

		else if(ans1<ans2)
		printf("%.12f\n",ans1);
		else
		printf("%.12f\n",ans2);

	}
}
	return 0;
}