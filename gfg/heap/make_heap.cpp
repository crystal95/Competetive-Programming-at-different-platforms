using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iostream>
int heap[100000];
int heapsize=0;
void swap(int *a, int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
void heap_insert(int x)
{
	heapsize++;
	heap[heapsize]=x;
	int parent=heapsize/2;
	int child=heapsize;
	while(heap[parent]>x && parent>0 )
	{
		heap[child]=heap[parent];
		child=parent;
		parent=parent/2;
	}
	heap[child]=x;
}
int  heap_delete()
{
	int x=heap[1];
	int sz=heapsize;
	heap[1]=heap[heapsize--];
	int parent = 1;
	int child=2*parent;
	while(child<=heapsize)
	{
		if(heap[parent]<heap[child])
		{
			if(child+1<=heapsize && heap[parent]<heap[child+1])
			{
				return x;
			}
			else
			{
				if(child+1<=heapsize)
				{
					swap(&heap[parent],&heap[child+1]);
					parent=child+1;
					child=2*parent;
				}
				else
				{
					return x;
				}
			}
		}
		else
		{	
			if(child+1<=heapsize && heap[child]>heap[child+1])
			{

				swap(&heap[parent],&heap[child+1]);
				parent=child+1;
				child=2*parent;
			}
			else
			{

				swap(&heap[parent],&heap[child]);
				parent=child;
				child=2*parent;
			}
		}

	}
	return x;
}
int main()
{
	int i,j,x,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		heap_insert(x);
	}
	for(i=1;i<=heapsize;i++)
		cout<<heap[i]<<" ";

	cout<<endl;
	while(heapsize!=0)
	{
		cout<<heap_delete()<<endl;
	}
return 0;
}