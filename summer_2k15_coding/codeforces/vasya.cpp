
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

#define fr(i,n) for(i=0;i<n;i++)

int sum;
typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;
int bsearch(int lo, int hi, vi &arr,int find )
{
	
	while(lo<hi)
	{
		int mid = lo + (hi-lo)/2;
		if(arr[mid]+find >= sum)
		{
			hi = mid ;
		}
		else
		{
			lo=mid+1;
		}
	}
	return lo; 
}

int main ()
{

int i,x,j,k,n,l,ind;
vi a;
vi b;
cin >> n>> sum;

fr(i,n)
{
	cin>>x;
	a.push_back(x);
}

sort(a.begin(),a.end());

fr(i,n)
{
	cin>>x;
	b.push_back(x);
}

sort(b.begin(),b.end());
int count=0;

for(i=n-1;i>=0;i--)
{
	if(b.size()>0)
	ind=bsearch(0,b.size()-1,b,a[i]);
	else break;
	if(ind >=0 )
	{
	if(b[ind]+a[i]>= sum  )
	{
		count++;
		b.erase(b.begin(),b.begin()+ind+1);
	}
	else 
		break;
}

}
cout<<"1"<<" "<<count<<endl;
		   	
	return 0;

}