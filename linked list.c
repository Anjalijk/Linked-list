#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *address;
};

void insertatend(struct node* head,int data)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->address=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	struct node* s = head;
	while(s->address!=NULL)
	{
		s=s->address;
	}
	s->address=temp;
}

void insertatfront(struct node* head,int data)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->address=NULL;
	temp->address=head;
	head=temp;
}

void insertafter(struct node* head,int data,int dataafter)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->address=NULL;
	struct node* s=head;
	while(s->data!=dataafter)
	{
		s=s->address;
	}
	temp->address = s->address;
	s->address=temp;
}

void printLL(struct node* head)
{
	struct node* s = head;
	while(s!=NULL)
	{
		printf("%d",s->data);
		s=s->address;
	}
}
int main()
{
	int data,c,dataafter;
	struct node* temp;
	struct node* s;
	struct node* head=NULL;
	printf("\n 1.Insertatend =\n");
	printf("\n 2.Insertatfront=\n");
	printf("\n 3.Insertafter=\n");
	printf("\n 4.Print Linked List=");
	printf("\n exit \n");
	printf("\n Enter choice=\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf("Enter data=");
		        scanf("%d",&data);
		        insertatend(head,data);
		        break;
		case 2: printf("Enter data=");
		        scanf("%d",&data);
		        insertatfront(head,data);
		        break;
		case 3: insertafter(head,data,dataafter);
		        break;
		case 4: printLL(head);
		        break;
						
		default:exit(1);
		
	} 
}
