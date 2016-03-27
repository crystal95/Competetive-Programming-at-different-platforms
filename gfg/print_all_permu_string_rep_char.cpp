using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int cnt=0;
int compare (const void * a, const void * b)
{
    return ( *(char *)a - *(char *)b );
}
void print(char *a,char *data, int start, int last)
{
	for(int i=0;i<last;i++)
	{
		data[start]=a[i];
		
		if(start==last-1)
		{
			cout<<data<<endl;cnt++;
		}	
		else
		print(a,data,start+1,last);
	}
}
int main()
{
	char a[100];
	cin>>a;
	int l=strlen(a);
	int last=l;
	char *data=(char *)(malloc((sizeof(char))*(l+1)));
	data[l]='\0';
	qsort(a, l, sizeof(char), compare);
	cout<<"sorted string"<<a<<endl;
	print(a,data,0,l);
	cout<<cnt<<endl;
	return 0;
}
	