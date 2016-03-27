#include<iostream>
using namespace std;

long long int a[1000001];

int main()
{
	long long int w,v,count,d,i,j,t,n,m,k,g,h,l,ing,inh,in,min1,min2;
	cin>>n>>k;
	v=0;

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(k>0)
	{
		for(i=n-1;i>0;i--)
		{
			d=a[i]-a[i-1];
			count=0;
			in=0;
			ing=0;
			inh=0;
			//if(d<0)
			//	continue;
			k=a[i]+d;
			l=a[i-1]-d;
			for(g=i+1,h=i-2;g<n || h>=0;)
			{
				w=1;
				if(a[g]!=k && ing==0 && g<n)
					count++;
				if(a[h]!=l && inh==0 && h>=0)
					count++;
				if(g<n-1)
				{
					g++;
					k+=d;
				}
				else
				{
					ing++;
				}
				if(h>0)
				{
					h--;
					l-=d;
				}
				else
					inh++;
				if(inh!=0 && ing!=0)
					break;
				if(count>k)
				{
					in++;
					break;
				}
			}
			if(in==0)
			{
				v++;
				if(v==1)
				{
					min2=l;
					min1=d;
				}
				else
				{
					if(l<min2)
					{
						min2=l;
						min1=d;
					}
					else if(l==min2)
					{
						if(d<min1)
						{
							min2=l;
							min1=d;
						}
					}
				}
			}
		}
		for(i=0;i<n-1;i++)
		{
			cout<<min2<<" ";
			min2+=min1;
		}
		cout<<min2<<"\n";
	}
	else
	{
		for(i=0;i<n-1;i++)
			cout<<a[i]<<" ";
		cout<<a[n-1]<<"\n";
	}
	return 0;
}
