using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
typedef long long ll;
int main()
{
	ll x,i;
	cin>>x;
	vector<int> step(x+1,0);
	
	step[0]=0;
	step[1]=1;
	step[2]=1;step[3]=1;step[4]=1;step[5]=1;
	for(i=6;i<=x;i++)
	{
		step[i]=min(step[i-1],min(step[i-2],min(step[i-3],min(step[i-4],step[i-5]))))+1;
	}
	cout<<step[x]<<endl;
	return 0;
}