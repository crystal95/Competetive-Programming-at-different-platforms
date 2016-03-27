#include<stdio.h>
#include<stdlib.h>
struct node {
	long long int q;
	struct node *left;
	struct node *right;
};
struct node * insert(struct node **head,long long int u)
{
	if((*head)==NULL)
	{
		struct node *temp=(struct node *)malloc(sizeof(struct node));
		temp->right=temp->left=NULL;
		temp->q=u;
		(*head)=temp;
	}
	else if(u<(*head)->q)
	{
		(*head)->left=insert(&((*head)->left),u);
	}
	else if(u>(*head)->q)
	{
		(*head)->right=insert(&((*head)->right),u);
	}
	return (*head);
}
int main()
{
	long long int w,e;
	scanf("%lld",&w);
	for(e=0;e<w;e++)
	{
		struct node *head=NULL;
		long long int r,t,u;
		char y;
		scanf("%lld",&r);
		getchar();
		for(t=0;t<r;t++)
		{
			scanf("%c %lld",&y,&u);
			if(y=='i')
			{
				head=insert(&head,u);
			}
			getchar();
		}
	}
	return 0;
}
			

