
using namespace std;

#include <map>
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <string.h>
#include <math.h>
#include <cmath>
#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
const long long mod = 1000000000 + 7;
double  min(double a,double b)
{
	if(a<b)
		return a;
	else 
		return b;
}
ll arr[100005]={0};
ll sum[100005]={0};

long long pow(long long a, long long b)
{
	long long ret = 1;
	while (b)
	{
		if (b & 1)
			ret = (ret * a) % mod;
		a = (a * a) % mod;
		b >>= 1;
	}
	return ret;
}


int main ()
{
	int n,count=0,i,len,k=0;
	double x,sum=0;
	cin>>n;
	vector < pair<double,double> > arr(2*n);

	for(i=0;i<2*n;i++)
	{
		cin>>x;
		if(floor(x)==x)
		{
			count++;
		}
		else{
			if(x-double(floor(x))<0.5)
		arr[k++]=make_pair(x-double(floor(x)), double(double(ceil(x))-x));
	else
		arr[k++]=make_pair( double(double(ceil(x))-x),x-double(floor(x)));
	
		cout<<arr[k-1].first<<" "<<arr[k-1].second<<endl;
	}

	}
	/*if(count%2!=0)
	{
		arr[k++]=make_pair(0,0);
	}*/
	sort(arr.begin(),arr.begin()+k);
	cout<<"sorted"<<endl;
	for(i=0;i<k;i++)
	cout<<arr[i].first<<" "<<arr[i].second<<endl;
	//len=arr.size();
cout<<"sum"<<endl;
	for(i=0;i<k/2;i++)
	{
		sum=sum + min(abs(arr[i].second - arr[k-1-i].first),abs(arr[i].first - arr[k-1-i].second));
		cout<<abs(arr[i].first - arr[k-1-i].second)<<" ";
	}
	//cout<<"sum"<<endl;
	if(count%2!=0)
	{
		if(arr[i].first>=0.5)
		{
			sum=sum + arr[i].second;

			
		}
	}
	printf("%.3f\n",sum);
	return 0;
}

