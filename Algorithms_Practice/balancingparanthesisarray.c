#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*typedef struct node{
  char brace;
  struct node *next;
  struct 	node *back;
  }node;
  node *push(char br,node *ptr)
  {

  ptr->next=(node *)malloc(sizeof(node));
  node *temp=ptr;
  ptr=ptr->next;
  ptr->brace=br;
  ptr->next=NULL;
  ptr->back=temp;
  return(ptr);
  }
  int push(char[100],int i)
  {
  i++;
  arr[]

  node *pop(node *ptr)
  {
  node *temp=ptr;
  ptr=ptr->back;
  ptr->next=NULL;
  free(temp);
  return ptr;
  }
 */		
int main()
{
	int n,i,flag=0,k=0;
	char str[100],arr[100];
	scanf("%s",str);
	/*	node *dum;
		dum=(node *)malloc(sizeof(node));
		dum->brace=-1;
		dum->next=NULL;
		dum->back=NULL;*/
		n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='{')
		{
			arr[k]=str[i];
			k++;
		}
		if(str[i]=='(')

		{
			arr[k]=str[i];
			k++;
		}
		if(str[i]=='[')
		{
			arr[k]=str[i];
			k++;
		}
		if(str[i]=='}')

		{	k--;
			if(arr[k]=='{')
			{
				arr[k]=NULL;
			}
			else
			{flag=1;
				break;
			}
		}

		if(str[i]==')')

		{	k--;
			if(arr[k]=='(')
			{
			arr[k]=NULL;
			}
			else
			{flag=1;
				break;
			}
		}

		if(str[i]==']')
		{	k--;
			if(arr[k]=='[')
			{
			arr[k]=NULL;
			}
			else
			{	flag=1;
				break;
			}
		}

	}
	if(flag==0 && arr[k]==NULL)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}

