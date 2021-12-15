#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coe;
    int deg;
    struct node* next;
}*newnode,*temp;

struct node* head=NULL;
struct node* tail=NULL;

void create(int n)
{
    int value,co,de,i=0;

    newnode=(struct node*)malloc(sizeof(struct node));
    do{
    printf("enter teh coefficient:");
    scanf("%d",co);
    printf("enter the degree:");
    scanf("%d",&de);
    newnode->coe=co;
    newnode->deg=de;

    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;

    }
    }
    while(i<n);

}
