
#include <numeric>
#include <string>
#include <functional>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>

using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;

void updatevalue(int *st,int ss,int se,int diff,int i,int index)
{
	if(i>se || i<ss)
		return ;
	st[index]=st[index]+diff;
	if(se==ss)return;
	int mid = (ss+se)/2;
	updatevalue(st,0,mid,diff,i,2*index+1);
	updatevalue(st,mid+1,se,diff,i,2*index+2);	
}

int getsum(int *st, int ss,int se, int qs,int qe,int index)
{
	if(qs<=ss && qe>=se)
		return st[index];
	if(qs>se || qe<ss)
		return 0 ;

	int mid = (ss+se)/2;
	return getsum(st,ss,mid,qs,qe,2*index+1) + getsum(st,mid+1,se,qs,qe,2*index+2);
}
int constructST(int arr[],int ss,int se,int *st ,int si)
{
	if(ss==se)
	 {
	 	st[si]=arr[ss];
	 	return st[si];
	 }

	int mid = (ss+se)/2;
	st[si]=constructST(arr, ss, mid, st, 2*si+1) + constructST(arr, mid+1, se , st, 2*si+2);
	return st[si];
}
int main ()
{
	int i,j,k,l,n,m,val,qs,qe;
	int *arr;
	char ch;
	cin>>n;
	arr=new int[n+1];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}


	int x = (int)(ceil(log2(n)));
    int max_size = 2*(int)pow(2, x) - 1; 
    int *st = new int[max_size];
    int total_sum = constructST(arr, 0, n-1, st, 0);

	

    while(1)
    {	
			cin>>ch;
			if(ch=='u')
			{
				cin>>i>>val;
				int diff=val-arr[i];
			 	updatevalue(st,0,n-1,diff,i,0);
			}
			else if(ch=='s')
			{
				 cin>>qs>>qe;
				  int ans = getsum(st,0,n-1,qs,qe,0);
				  cout<<ans<<endl;
			}

	}
	
   
  
    return 0;
}





