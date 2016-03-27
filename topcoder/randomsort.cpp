using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
typedef vector<int> VI;
map<VI,double> mymap;
double chk(VI arr)
{
	int i ,j;
	double t;
	if(mymap.find(arr)!=mymap.end())
		return (mymap.find(arr))->second;
	int n=arr.size();
	double tot=0,res=0;

	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
				res+=chk(arr);
				tot++;
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	double ans=0;
	if(tot!=0)
	ans=res/tot+1;
	mymap[arr]=ans;
	return ans;

}

int main()
{
	VI arr;
	int n,i,j,k,l,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	double ans=chk(arr);
	cout<<ans<<endl;

	
	return 0;
}



