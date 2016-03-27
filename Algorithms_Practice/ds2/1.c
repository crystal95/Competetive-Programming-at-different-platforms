#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}node;
node *push(node *root,int k)
{ 
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
		int r,R;
		scanf("%d",&r);
		int n,i=0;
		int tmp;
		int sum[107]={0};
		int flag=0;
		int arr[100];
		node *root=NULL;

		root=(node *)malloc(sizeof(node));
		root->data=100;
		root->next=NULL;
		root->prev=NULL;
		for(R=0;R<r;R++)
		{
			scanf("%d",&n);
			
			if(n<0)
			{
				root=push(root,n);
			}
			else
			{
				tmp=(root->prev->data);
				tmp=(-1)*tmp;
				sum[tmp]=sum[tmp]+n;
				if(sum[tmp]>=tmp)
				{
					flag=1;
				}
				int tmp2;
					tmp2=(-1)*(root->data);
		//		printf("%d",sum[tmp]);
				if(flag==1)
					break;
				else
				{
					if(n==tmp2)
					root=pop(root);
					else
					{	flag=1;
					break;}
				}
			}
			
		}
		printf("\n");
			if(flag==0 && root->data==100)
				printf(":-) Matrioshka!\n");
			else
				printf(":-( Try again.\n");
	}
	return 0;
}

