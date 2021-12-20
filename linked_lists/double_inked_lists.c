#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* before;
    struct node* after;
}*newnode,*temp;


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
    newnode->before=NULL;
    newnode->after=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        //temp=head;
    }
    else
    {
        tail->after=newnode;
        tail=newnode;
        tail->before=temp;
        temp=newnode;
        
        printf("%d \n",temp->data);
        
    }
    i++;
    }
}


void display()
{
    temp=head;
    while(temp->after!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->after;
    }
    printf("%d\n",temp->data);
    printf("reverse:\n");
    temp=tail;
    while(temp->before!=head)
    {
        printf("%d\n",temp->data);
        temp=temp->before;
    }
    printf("%d\n",temp->data);
}


void main()
{
    create();
    display();
}   