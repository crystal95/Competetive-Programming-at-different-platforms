#include<stdio.h>
#include<stdlib.h>
int heap[1000]={0};
int heapsize=0;
void insert(element)
{
	heapsize++;
	int i=heapsize;
	heap[heapsize]=element;
	while(heap[i/2]>element)
	{
		heap[i]=heap[i/2];
		i=i/2;
	}
	heap[i]=element;
}
int delete()
{
	int i,child,last;
	int min=heap[1];
		last=heap[heapsize--];
	for(i=1;2*i<heapsize;i=child)
	{
		child=2*i;
		if(child!=heapsize && heap[child+1]<heap[child])
			child++;
		if(last>heap[child])
		heap[i]=heap[child];
		else 
			break;

	}
	heap[i]=last;
	return min;
}
int main()
{
	int i,j,k,l,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		insert(k);

	}
	
	for(i=0;i<n;i++)
	{
		j=delete();
		printf("%d ",j);
	}

	return 0;
}

