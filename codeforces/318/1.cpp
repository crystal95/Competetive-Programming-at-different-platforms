using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <queue>
#include <math.h> 
int main()
{
	int i,j,k,l,m,n,maxe,first,x,chg,tmp;
	cin>>n;
	std::priority_queue<int> myque;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(i==0)
		{
			first=x;
			maxe=x;
		}
		else
		{
			myque.push(x);
		}
	}
	while(first<=myque.top())
	{
		tmp=myque.top();
		myque.pop();
		first+=1;
		tmp=tmp-1;
		myque.push(tmp);
		//cout<<myque.size()<<" ";

	}
	
	cout<<first-maxe<<endl;
return 0;
}