using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
typedef long long ll;
int main()
{
	ll i,j,k,jes,cnt=0,flag=0,n,x;
	cin>>n>>jes;
	vector<int> arr;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]<=jes)
			cnt++;
		else if(arr[i]>jes && flag==0)
		{
			flag=1;
		}
		else
			break;

	}
	cout<<cnt<<endl;
	return 0;
}