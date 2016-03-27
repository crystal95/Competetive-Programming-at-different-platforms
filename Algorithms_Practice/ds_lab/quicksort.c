#include<stdio.h>
void qsort(int arr[10],int first,int last)
{
	int pivot,i,j,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(arr[i]<=arr[pivot])
				i++;
			while(arr[j]>arr[pivot])
				j--;
			if(i<j)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		temp=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=temp;
		qsort(arr,first,j-1);
		qsort(arr,j+1,last);
	}
}




int main()
{
	int i,j,k,l,n,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	qsort(arr,0,n-1);

	printf("sorted array is: \n");
		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
	return 0;
}
