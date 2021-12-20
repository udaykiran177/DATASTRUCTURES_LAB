#include<stdio.h>
struct node{
    int data;
    struct node* next;
}*temp,*newnode;

struct node* head=NULL;
struct node* tail=NULL;

void create()
{
    int i=0;
    while(i<5){
    newnode=(struct node*)malloc(sizeof(struct node));
    int d;
    printf("enter the data:");
    scanf("%d",&d);
    newnode->data=d;
    newnode->next=NULL;
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
        tail->next=head;
    }
    i++;
    }
}

void disp(){
    temp=head;
    while(temp->next!=head);
    {
        printf(" %d \n",temp->data);
        temp->next;
    }
}

void main()
{
    create();
    disp();
}
