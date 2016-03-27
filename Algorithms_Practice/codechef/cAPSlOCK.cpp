#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,count=0;
	char str[1000];
	cin>>str;
	l=strlen(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			count++;
		}
	}
	if((count==l) || (count==(l-1) && (str[0]>=97 && str[0]<=122)))
	{
		for(i=0;str[i]!='\0';i++)
		{	if(str[i]>=65 && str[i]<=90)
			{
				str[i]=str[i]+32;
			}
			else
				str[i]=str[i]-32;
		}

	}
	
	
cout<<str<<endl;
	return 0;
}
