#include<stdio.h>
int heap[10000];
int size=0;
void insert(int n)
{
	size++;
	heap[size]=n;
	int temp=size;
	while(heap[temp/2]>n)
	{
		heap[temp]=heap[temp/2];
			temp=temp/2;
	}
	heap[temp]=n;
}
int deletemin();
{
	int first=heap[1];
	int last=heap[size];
	size--;


}
int main()
{
	int i,j,k,l;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&n);
		insert(n);
	}

	return 0;
}

