#include<stdio.h>
#include<stdlib.h>
struct pol{
        int quot;
        int deg;
        struct pol* next;
}*newnode,*temp1,*temp2;
struct pol* head1=NULL;
struct pol* tail1=NULL;
struct pol* head2=NULL;
struct pol* tail2=NULL;
void create1(int n){
        int q,d,i=0;
        while (i<n)
        {
        newnode=(struct pol*)malloc(sizeof(struct pol));
        printf("enter the data-1");
        scanf("%d%d",&q,&d);
        newnode->quot=q;
        newnode->deg=d;
        newnode->next=NULL;
        if (head1==NULL)
        {
                head1=newnode;
                tail1=newnode;
        }
        else
        {
                tail1->next=newnode;
                tail1=newnode;
        }
        i++;

        }
}

void create2()
{

        int q,d,i=0,n1;
        printf("enter no of terms:");
        scanf("%d",&n1);
        while (i<n1)
        {       newnode=(struct pol*)malloc(sizeof(struct pol));
                printf("enter the data-2");
                scanf("%d%d",&q,&d);
                newnode->quot=q;
                newnode->deg=d;
                newnode->next=NULL;
                if (head2==NULL)
                {
                        head2=newnode;
                        tail2=newnode;
                }
                else
                {
                        tail2->next=newnode;
                        tail2=newnode;
                }
                i++;
        }
}

void disp(){
        temp1=head1;
        temp2=head2;
        while (temp1!=NULL)
        {
                printf("%dX^%d+",temp1->quot,temp1->deg);
                temp1=temp1->next;
        }
        printf("\n \n");
        while(temp2!=NULL)
        {
                printf("%dX^%d+",temp2->quot,temp2->deg);
                temp2=temp2->next;
        }
        printf("\n \n");
}

void add()
{
        temp1=head1;
        temp2=head2;
        while(temp1&&temp2!=NULL)
        {
        if (temp1->deg==temp2->deg)
        {
                printf("%d X ^ %d +",temp1->quot+temp2->quot,temp1->deg);
                temp1=temp1->next;
                temp2=temp2->next;
        }
        else if (temp1->deg<temp2->deg)
        {
                printf("%d X ^ %d +",temp2->quot,temp2->deg);
                temp2=temp2->next;
        }
        else
        {
                printf("%d X ^ %d +",temp1->quot,temp1->deg);
                temp1=temp1->next;
        }
        }
        if (temp1==NULL)
        {
                while(temp2!=NULL)
                {
                        printf("%d X ^ %d +",temp2->quot,temp2->deg);
                        temp2=temp2->next;
                }
        }
        else
        {
                while(temp1!=NULL)
                {
                        printf("%d X ^ %d +",temp1->quot,temp1->deg);
                        temp1=temp1->next;
                }
        }
}



void main()
{
        int n;
        printf("enter the no of terms:");
        create1(n);
        create();
        disp();
        add();
}
