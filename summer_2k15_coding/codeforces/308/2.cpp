
#include <numeric>
#include <string>
#include <functional>
#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

#define fr(i,n) for(i=0;i<n;i++)

typedef vector<int> vi;
typedef vector<long long int > vll;
typedef long long int ll;
typedef vector<unsigned long long int > vull;
typedef unsigned long long int ull;




int main ()
{
	int i,j,k,l,min2=999999,min3=999999,l1,l2,l3,x;
	char a[100005],b[100005],c[100005];
	int arr1[26]={0},arr2[26]={0},arr3[26]={0};
	cin>>a>>b>>c;
	l1=strlen(a);
	l2=strlen(b);
	l3=strlen(c);
for(i=0;i<l1;i++)
{
	arr1[a[i]-'a']++;
}
for(i=0;i<l2;i++)
{
	arr2[b[i]-'a']++;
}
for(i=0;i<l3;i++)
{
	arr3[c[i]-'a']++;
}
for(i=0;i<26;i++)
{	if(arr2[i]!=0)
	{
		
		x=arr1[i]/arr2[i];
		if(min2>x)
			min2=x;
	}
	if(arr3[i]!=0)
	{	
		x=arr1[i]/arr3[i];
		if(min3>x)
			min3=x;
	}
}
if((min2==0 && min3==0)) 
	cout<<a;
else if(min3>=min2)
{
	
		for(i=0;i<26;i++)
		{
			if(arr3[i]!=0)
			arr1[i]=arr1[i]-min3*arr3[i];
		}
		min2=999999;
		for(i=0;i<26;i++)
		{
			if(arr2[i]!=0)
			{	
				x=arr1[i]/arr2[i];
				if(min2>x)
					min2=x;
			}
		}
		if(min2==999999)
			min2=0;
		if(min2!=0)
		{
			for(i=0;i<26;i++)
            {
             	if(arr2[i]!=0) 
				arr1[i]=arr1[i]-min2*arr2[i];
			}
		}
		for(i=0;i<min3;i++)
		{
			cout<<c;
		}
		for(i=0;i<min2;i++)
		{
			cout<<b;
		}
		for(i=0;i<26;i++)
		{
			
			if(arr1[i]!=0)
			{
				for(l=0;l<arr1[i];l++)
				cout<<char(i+97);
			}
		}
}
else if(min3<min2)
{
	
		for(i=0;i<26;i++)
		{
			if(arr2[i]!=0)
			arr1[i]=arr1[i]-min2*arr2[i];
		}
		min3=999999;
		for(i=0;i<26;i++)
		{
			if(arr3[i]!=0)
			{	
				x=arr1[i]/arr3[i];
				if(min3>x)
					min3=x;
			}
		}
		if(min3==999999)
			min3=0;
		if(min3!=0)
		{
			for(i=0;i<26;i++)
            {
             	if(arr3[i]!=0)
				arr1[i]=arr1[i]-min3*arr3[i];
			}
		}
		for(i=0;i<min2;i++)
		{
			cout<<b;
		}
		for(i=0;i<min3;i++)
		{
			cout<<c;
		}
		for(i=0;i<26;i++)
		{
			
			if(arr1[i]!=0)
			{
				for(l=0;l<arr1[i];l++)
				cout<<char(i+97);
			}
		}
}


cout<<endl;


return 0;
 } 


