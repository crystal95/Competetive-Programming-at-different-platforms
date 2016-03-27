#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
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
node *pop(node *ptr)
{
	node *temp=ptr;
	ptr=ptr->back;
	ptr->next=NULL;
	free(temp);
	return ptr;
}
		
int main()
{
	int n,i,flag=0;
	char str[100];
	scanf("%s",str);
	node *dum;
	dum=(node *)malloc(sizeof(node));
	dum->brace=-1;
	dum->next=NULL;
	dum->back=NULL;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='{')
			dum=push(str[i],dum);

		if(str[i]=='(')
			dum=push(str[i],dum);

		if(str[i]=='[')
			dum=push(str[i],dum);
		if(str[i]=='}')
		{	if(dum->brace=='{')
			{
				dum=pop(dum);
				
			}
			else
			{flag=1;
				break;
			}
		}

		if(str[i]==')')

		{	if(dum->brace=='(')
			{
				dum=pop(dum);
			}
			else
			{flag=1;
				break;
			}
		}

		if(str[i]==']')
		{	if(dum->brace=='[')
			{
				dum=pop(dum);
			}
			else
			{	flag=1;
				break;
			}
		}

	}
	if(flag==0 && dum->brace==-1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}

