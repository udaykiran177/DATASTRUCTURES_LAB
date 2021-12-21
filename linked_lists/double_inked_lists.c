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

        newnode->before=tail;
        tail=newnode;
        //temp=newnode;
        
        //printf("%d \n",temp->data);
        
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
    /*printf("reverse:\n");
    temp=tail;
    while(temp->before!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->before;
    }
    printf("%d\n",temp->data);*/
}

void insert_b()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    int d;
    printf("enster the data:");
    scanf("%d",&d);
    newnode->data=d;
    newnode->after=head;
    newnode->before=NULL;
    head=newnode;
}

void insert_e()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    int d;
    printf("enter the data:");
    scanf("%d",&d);
    newnode->after=NULL;
    newnode->data=d;
    newnode->before=tail;
    tail=newnode;

}

void insert_d()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    int pos,d;
    printf("enter the data and position");
    scanf("%d%d",&d,&pos);
    temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->after;
    }
    newnode->data=d;
    newnode->before=temp;
    newnode->after=temp->after;
    temp->after=newnode;
    temp->after->before=newnode;
}

void del_b()
{
    temp=head->after;
    free(head);
    head=temp;
    head->before=NULL;
    /*head=head->after;
    head->after=NULL;*/
}

void del_e()
{
    temp=tail->before;
    free(tail);
    tail=temp;
    tail->after=NULL;
}

void del_d()
{
    int p;
    printf("enter teh position:");
    scanf("%d",&p);
    temp=head;
    for(int i=0;i<p-1;i++)
    {
        temp=temp->after;
    }
    temp->after=temp->after->after;
    temp->after->before=temp;
}

void main()
{
    printf("enterthe choice:\n");
    printf("1.creation and display\n2.insertion at beggining\n3.insertion at end\n4.insertion at desired\n5.deletion at beggining\n6.deletion at end\n7.deletion at desired\n");
    int n;
    scanf("%d",&n);
    switch (n){
        case 1:
    create();
    display();
    break;
    case 2:
    printf("insertion at beginning:\n");
    insert_b();
    display();
    break;
    case 3:
    printf("insertion at end:\n");
    insert_e();
    display();
    break;
    case 4:
    printf("insertion at desired position:\n");
    insert_d();
    display();
    break;
    case 5:
    printf("deletion at beginnig:\n");
    del_b();
    display();
    break;
    case 6:
    printf("deletion at ending:\n");
    del_e();
    display();
    break;
    case 7:
    printf("at desired position:\n");
    del_d();
    display();
    break;
    default:printf("enter choice correctly");
    }
}
