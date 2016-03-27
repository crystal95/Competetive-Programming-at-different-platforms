#include<stdio.h>
#include<stdlib.h>
typedef struct heap
{
	int cap;
	int size;
	int  *elements;
}heap;
heap *initialize(int max)
{
	heap *H;
	H=(heap *)malloc(sizeof(heap));
	H->cap=max;
	H->size=0;
	H->elements=(int  *)malloc((max+1)*(sizeof(heap)));
	H->elements[0]=0;
return H;

}
void insert(int n,heap *H)
{
	int i;
	for(i=++H->size;H->elements[i/2]>n;i=i/2)
	{
		H->elements[i]=H->elements[i/2];
	}
		H->elements[i]=n;
	
}
int main()
{
	int i,j,k,l,arr[100],n;
	scanf("%d",&n);
	heap *H;
	H=initialize(n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);

		insert(arr[i],H);
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",H->elements[i]);
	}
	return 0;
}


