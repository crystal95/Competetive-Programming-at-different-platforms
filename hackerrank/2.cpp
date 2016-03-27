using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
#define max 1000000	
typedef long long ll;

void generate(vector<ll> &visited)
{
	int i ,j,k;
	visited[1]=0;
	for(i=2;i<=max;i++)
	{
		if(visited[i]==0)
		{
			for(j=i;j<=max;j+=i)
			{
				k=j;
				while(k>0)
				{
					visited[j]++;
					k=k/i;
					if(k%i!=0)
						break;
				}	
			}	
		}
	}
	for(i=1;i<=max;i++)
		visited[i]=visited[i-1]+visited[i];

}
int main()
{
	ll i,j,k,n,x,sum=0,tmp=0,count=0,count1=0;
	cin>>n;
	vector<ll> arr;
	vector<ll> visited(max+1,0);
	generate(visited);
	
//arr.push_back(0);
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(visited[x]);
		
	}

	ll total=1<<n;    
for(i=1;i<total;i++)    
{    
    count=0;    
    for(j=0;j<n;j++)    
    {    
        if(i&(1<<j))    
        count=count+arr[j];      
    }    

        if(count%2==0)     
        count1=count1+count;      
}    
cout<<count1<<endl;
	return 0;
}
