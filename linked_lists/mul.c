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
struct pol* head3=NULL;
struct pol* tail3=NULL;
struct node* create1(struct node* head)
{
        int q,d,i=0,n;
        printf("enter the no of terms:");
        scanf("%d",&n);
        while (i<n){
        newnode=(struct pol*)malloc(sizeof(struct pol));
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


void disp(struct node* head){
        temp1=head1;
        temp2=head2;
        while (temp1->next!=NULL)
        {
                printf("(%db X^ %d) +",temp1->quot,temp1->deg);
                temp1=temp1->next;
        }
        printf("(%d X^ %d)",temp1->quot,temp1->deg);
        
}


void mul()
{
        temp1=head1;
        temp2=head2;
         do
        {
                temp2=head2;
                while (temp2!=NULL)
                {
                        newnode=(struct pol*)malloc(sizeof(struct pol));
                        //printf("(%d X ^ %d)+",(temp1->quot)*(temp2->quot),(temp1->deg)+(temp2->deg));
                        newnode->quot=temp1->quot*temp->quot;
                        newnode->deg=tenp1->deg+temp2->deg;
                        if (head3==NULL)
                        {
                                head3=newnode;
                                tail3=newnode;
                        }
                        else{
                                tail->next=newnode;
                                tail=newnode;
                        }
                        temp2=temp2->next;
                }
                temp1=temp1->next;
        }while(temp1!=NULL);
}


void main()
{
        head1=create(head1);
        head2=create(head2);
        display(head1);
        display(head2);
        mul();
        display(head3);
}
