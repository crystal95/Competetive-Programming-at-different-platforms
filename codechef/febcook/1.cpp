using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
typedef long long ll;
int main()
{

	ll T;
	cin>>T;
	while(T--)
	{
		ll i,j,k,x,D,N;
		cin>>D>>N;
		vector<int> arr(100009,0);
		arr[0]=0;
		for(i=1;i<100004;i++)
			arr[i]=arr[i-1]+i;
		x=N;
		for(i=0;i<N;i++)
		{
			x=arr[x];
		}
		cout<<x<<endl;

	}
	return 0;
}
