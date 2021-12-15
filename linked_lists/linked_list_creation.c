#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*newnode,*temp;


struct node* head=NULL;
struct node* tail=NULL;


void create()
{
    char ch;
    int value;
    do
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        if (head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        printf("enter to 'y' cont:");
        fflush(stdin);
        scanf("%c",&ch);
    }
    while(ch=='y');
}


void disp()
{
    temp=head;
    while (temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
}

void add_end()
{

    int value;
    printf("enter the element to be inserted:");
    scanf("%d",&value);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    tail->next=newnode;
    tail=newnode;

}


void add_head()
{
    int value;
    printf("enter the value");
    scanf("%d",&value);
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
//not completed
void insert_d()
{
    int value,n;
    temp=head;
    printf("enter the position:");
    scanf("%d",&n);
    printf("enter the value:");
    scanf("%d",&value);
    newnode=(struct node*)malloc(sizeof(struct node));
    for (int i=0;i<n-1;i++)
    {
        temp=temp->next;
    }
    newnode->data=value;
    newnode->next=temp->next;
    temp->next=newnode;
    
}
//not completed


void delete_begin()
{
    temp=head;
    head=temp->next;

}

void delete_end()
{
    temp=head;
    while (temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
}

void delete_d()
{

    int pos;
    temp=head;
    printf("enter the position to be deleted:");
    scanf("%d",&pos);
    for (int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;

}


void main()
{
    create();
    printf("before adding:\n");
    disp();
    add_end();
    printf("after inserting at end:\n");
    disp();
    printf("inserting at beginning:");
    add_head();
    disp();
    printf("insertion at desired position:\n");
    insert_d();
    disp();
    printf("adding at head:\n");
    disp();
    printf("deleting at begining:\n");
    delete_begin();
    disp();
    printf("deleting at end:\n");
    delete_end();
    disp();
    printf("deleting at desired position:\n \n");
    delete_d();
    disp();
}