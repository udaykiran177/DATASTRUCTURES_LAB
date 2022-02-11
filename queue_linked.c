//implementation of linear queues using linked lists

#include<stdio.h>
#include<stdlib.h>

struct m{
        int d;
        struct m *next;
}*new,*temp;

struct m *front=NULL;
struct m *rear=NULL;

void push(int item){
        new=(struct m*)malloc(sizeof(struct m));
        new->d=item;
        new->next=NULL;
        if (front==NULL){
                front=new;
                rear=new;
        }
        else{
                rear->next=new;
                rear=new;
        }
}

int pop(){
        temp=front;
        int m=front->d;
        front=temp->next;
        return m;
}

void disp(){
        temp=front;
        while(temp!=NULL){
                printf("%d \n",temp->d);
                temp=temp->next;
        }
        //printf("%d \n",temp->d);
}

int main(){
        int n,e;
        printf("enter the no of elements:");
        scanf("%d",&n);
        for (int i=0;i<n;i++){
                printf("enter the elements:");
                int e;
                scanf("%d",&e);
                push(e);
         }
        printf("the elements in thwe queue are: \n");
        disp();
        printf("enter the elements to be poped: \n");
        scanf("%d",&e);
        printf("poped elements are:\n");
        for (int i=0;i<e;i++){
                printf("%d \n",pop());
        }
        printf("after poping: \n");
        disp();
        return 0;
}
