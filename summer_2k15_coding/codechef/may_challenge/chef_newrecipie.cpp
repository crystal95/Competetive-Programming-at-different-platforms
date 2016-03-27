using namespace std;
#include <map>
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>


#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;



int main ()
{

int T;
cin>>T;
while(T--)
{
	int min=99999,i,j,k,l,n,x=0,count=0,flag=0;
	vi arr;

	cin>>n;

	while(n--)
	{
		cin>>x;
		if(x<min)
			min=x;
		if(x<2)
			flag=1;
		arr.push_back(x);
		count+=x;
	}

	if(flag==1)
		cout<<"-1"<<endl;
	else
	{
		cout<<count-min+2<<endl;
	}

}
	return 0;
}
