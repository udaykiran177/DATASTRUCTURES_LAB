#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node* next;
}*newnode,*temp;

struct node* head=NULL;
struct node* tail=NULL;

void create(int n)
{
        int i=0;
        while(i<n)
        {
                newnode=(struct node*)malloc(sizeof(struct node));
                int d;
                printf("enter the data:");
                scanf("%d",&d);
                newnode->data=d;
                newnode->next=head;
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
                i++;
        }
}

void disp()
{
        temp=head;
        while(temp->next!=head)
        {
                printf("%d\n",temp->data);
                temp=temp->next;
        }
        printf("%d\n",temp->data);
}

void insert_b()
{
        int d;
        printf("enter the data to be inserted:");
        scanf("%d",&d);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=d;
        newnode->next=head;
        tail->next=newnode;
        //free(head);
        head=newnode;
}


void insert_e()
{
        int d;
        printf("enter the data:");
        scanf("%d",&d);
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=d;
        tail->next=newnode;
        newnode->next=head;
        tail=newnode;
}

void insert_d()
{
        int d,p;
        temp=head;
        printf("enter the data and position:");
        scanf("%d%d",&d,&p);
        for (int i=0;i<p-1;i++)
        {
                temp=temp->next;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=d;
        //temp->next =newnode;
        newnode->next=temp->next->next;
        temp->next=newnode;
}

void del_b()
{
        temp=head->next;
        tail->next=temp;
        free(head);
        head=temp;
}

void del_e()
{
        temp=head;
        while(temp->next!=tail)
        {
                temp=temp->next;
        }
        temp->next=head;
        free(tail);
        tail=temp;
}

void del_d()
{
        int p;
        printf("enter the position:");
        scanf("%d",&p);
        for (int i=0;i<p-1;i++)
        {
                temp=temp->next;
        }
        temp->next=temp->next->next;
}




void main()
{
        int n,c,con;
        printf("enter the length of the list:");
        scanf("%d",&n);
        printf("\n1.create and display\n2.insertion at begining\n3.insertion at end\4.insertion at desired\n5.deletiopn at begining\n6.deletion atend\n7.deletion at desired\n");

        do{
                printf("\nenter your choice:");
                scanf("%d",&c);
        switch (c)                                                                                                                         104,1-8       72%
        {

        case 1:
                create(n);
                disp();
                break;
        case 2:
                insert_b();
                disp();
                break;
        case 3:
                insert_e();
                disp();
                break;
        case 4:
                insert_d();
                disp();
                break;
        case 5:
                del_b();
                disp();
                break;
        case 6:
                del_e();
                disp();
                break;
        case 7:
                del_d();
                disp();
                break;
        default:printf("enter the correct choice");
        }
        printf("do you want to continue:");
        scanf("%d",&con);
        }while(con==1);
}
