#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	long long int data;
	struct node *next;
	struct node *prev;
}node;
node *push(node *root,long long int k)
{ 
	if(root==NULL)
	{
		root=(node *)malloc(sizeof(node));
		root->data=k;
		root->next=NULL;
		root->prev=NULL;
		return root;
	}
	node *temp;
	temp=root;
	root->next=(node *)malloc(sizeof(node));
	root=root->next;
	root->data=k;
	root->next=NULL;
	root->prev=temp;
	return root;
}
node *pop(node* root)
{
	node *temp;
	temp=root;
	root=root->prev;
	root->next=NULL;
	free(temp);
	return root;
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int r,R;

		scanf("%lld",&R);
		long long int n[R+1];
		long long int i=0;
		long long int tmp;
		int flag=0;
		long long s;
		node *root=NULL;

		for(r=0;r<R;r++)
		{

			scanf("%lld",&n[r]);
		}
		for(r=0;r<R;r++)
		{
			s=0;
			node *temp=NULL;
			if(n[0]+n[R-1]!=0)
			{
				flag=1;
				break;
			}
			else if(n[r]<0)
			{
				root=push(root,n[r]);
			}
			else
			{
				if(root==NULL)
				{
					flag=1;
					break;
				}
				else if(root->data==-1*(n[r]))
				{
					if(root->prev!=NULL)
						root=pop(root);
					else
						root=NULL;
					root=push(root,n[r]);
				}
				else
				{
					while(root->data!=-1*(n[r]) || root==NULL)
					{	if(root->data<0)
						{	flag=1;
							break;
						}
						s=s+root->data;
						if(root->prev!=NULL)
						{
							root=pop(root);
						}
						else 
							root=NULL;
					}
					if(n[r]<=s)
					{
						flag=1;
						break;
					}
					else if(root->prev!=NULL)
					{
						root=pop(root);
						root=push(root,n[r]);
					}
					else
					{	root=NULL;
					root=push(root,n[r]);
					}
					if(flag==1)
						break;
				}
			}

		}
	
	if(flag==0)
		printf(":-) Matrioshka!\n");
	else
	{
		printf(":-( Try again.\n");
		continue;
	}

}
return 0;
}

