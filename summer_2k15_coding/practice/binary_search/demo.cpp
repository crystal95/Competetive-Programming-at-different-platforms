#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;


int bsearch(vi &arr, int target )
{
	int lo=0;
	int hi=arr.size()-1;
	int mid;
	while(lo<=hi)
	{
		mid=lo + (hi-lo)/2;
		if(arr[mid]==target)
			return mid;
		else if(arr[mid]<target)
			lo=mid+1;
		else
			hi=mid-1;
	}
	return -1;
}



int main ()
{
	int i,j,k,l,x,n,target;
	vector<int> arr;
	cin>>n;
	fr(i,n)
	{
		cin>>x;
		arr.push_back(x);
	}
	
	cin>>target;
	
	sort(arr.begin(),arr.end());
	
	x=bsearch(arr,target);	
	
	if(x>=0)
	cout<<"Found"<<endl;
	
	else 
	cout<< "Sorry" <<endl;
	
	return 0;

}