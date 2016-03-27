#include<stdio.h>
int heap[10000]={0};
int size=0;
void insert(int n)
{
	int c;
	size++;
c=size;
	while(heap[c/2]>n)
	{
		heap[c]=heap[c/2];
		c=c/2;
	}
	heap[c]=n;
	return;
}
int delete()
{
	int r,now,child,end;
	end=heap[size--];
	r=heap[1];
	for(now=1;2*now<=size;now=child)
	{
		child=2*now;
		if(2*now+1<=size && heap[child+1]<heap[child])
			child++;
		if(heap[child]<end)
			heap[now]=heap[child];
		else 
		{	break;
		}
	}
	heap[now]=end;

	return r;
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

/*	for(i=0;i<=n;i++)
	{
		printf("%d",heap[i]);
	}
	printf("\n");
	*/
	for(i=1;i<=n;i++)
	{
		j=delete();
		printf("%d ",j);
	}

	return 0;
}

