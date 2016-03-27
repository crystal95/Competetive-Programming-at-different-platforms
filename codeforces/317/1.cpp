using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
int main()
{
	int i,j,k,l,n,na,nb,m,x;
	vector<long long int> arr;
	vector<long long int> brr;
	cin>>na>>nb;
	cin>>k>>m;
	for(i=0;i<na;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
for(i=0;i<nb;i++)
	{
		cin>>x;
		brr.push_back(x);
	}
	if(arr[k-1]<brr[nb-m])
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
return 0;
}