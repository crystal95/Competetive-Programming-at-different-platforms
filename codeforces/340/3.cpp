using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
typedef long long ll;
double dis(double a,double b,double c,double d)
{
	return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}
int main()
{
	double x1,x2,y1,y2,n,i,j,k,l,dis1=0,dis2=0,exis1=0,exis2=0,a,b,max1=-1,max2=-1,corr2,corr1,r1=1000,r2=100000;
	cin>>n>>x1>>y1>>x2>>y2;
	vector<int> arr;
	vector<int> brr;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		dis1=dis(x1,y1,a,b);
		dis2=dis(x2,y2,a,b);
		arr.push_back(dis1);
		brr.push_back(dis2);
	}
	for(i=0;i<n;i++)
	{
		dis1=arr[i];
		dis2=brr[i];
		if(dis1>max1)
		{
			max1=dis1;
			corr2=dis2;
		}
		if(dis2>max2)
		{
			corr1=dis1;
			max2=dis2;
		}	

	}
	std::vector<int>::iterator up1,up2;
	if(corr2>max1)
	{
		r1=max1;
	}
	if(corr1>max2)
	{
		r2=max2;
	}
	if(corr2<max1)
	{
		if(r2>corr2)
		r2=corr2;
	}
	if(corr1<max2)
	{
		if(r1>corr1)
		r1=corr1;
	}
	sort(arr.begin(),arr.end());
	sort(brr.begin(),brr.end());
	up1= std::upper_bound(arr.begin(), arr.end(),r1); 
	up2= std::upper_bound(brr.begin(), brr.end(),r2); 
	if(up1!=arr.end())
	  {
	  		if(r1>*up1)
	  		r1=*up1;
	  }
	if(up2!=brr.end())
	  {
	  		if(r2>*up2)
	  		r2=*up2;
	  }
	
	cout<<(r1*r1+r2*r2)<<endl;
	return 0;
}
