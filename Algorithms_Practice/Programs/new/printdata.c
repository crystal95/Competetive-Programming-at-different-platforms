#include<stdlib.h>
#include<stdio.h>

extern void printData(int *array, int size);

void printData(int *array, int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d\n",array[i]);
}
