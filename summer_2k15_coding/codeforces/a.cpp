
#include<string.h>
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include <math.h>   

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

int arr[100005]= {0};
int chckprime(int x)
{
	if(x==1)
		return 0;
	else
	{
	int flag=0;
	for (int i = 2; i <= sqrt(x); ++i)
	{
		if (x%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 1;
	else 
		return 0;
	}
}
int bsearch(int x )
{
	int y=x;
	while(chckprime(x)!=1)
	{
		x++;
	}
arr[y]=x;
	return x;
}

int main()
{
	int mat[505][505];
	int i,j,k,n,m,x,l,count=0;
	cin>>n>>m;

	int min = 100005;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>mat[i][j];
			if(!chckprime(mat[i][j]))
			{
				if(arr[mat[i][j]]==0)
				x=bsearch(mat[i][j]);
				else
				x=arr[mat[i][j]];
				mat[i][j]=(x-mat[i][j]);
			}
			else 
				mat[i][j]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<m;j++)
		{
			count+=mat[i][j];		
		}
		if(count<min)
			min=count;
	}
	for(i=0;i<m;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			count+=mat[j][i];		
		}
		if(count < min)
			min=count;
	}
		cout<<min<<endl;
	return 0;
}