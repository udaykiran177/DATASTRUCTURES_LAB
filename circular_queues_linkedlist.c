#include<stdio.h>
#include<stdlib.h>
struct me{
        int data;
        struct me* next;
}*new,*temp;

struct me* front = NULL;
struct me* rear=NULL;
int c=0;
void enqueue(int item){
        /*if (){
         *
         *
         *
        }*/
        //else{
                new=(struct me*)malloc(sizeof(struct me));

                new->data=item;
                new->next=front;

                if (front==NULL){
                        front=new;
                        rear=new;
                }
                else{
                        rear->next=new;
                        rear=new;
                }
                c++;
        //}
}

void dequeue(){
        /*if(){
         *
         *
        }*/
        //else{
                front=front->next;
                c--;
        //}
}

void disp(){
        temp=front;
        int t=0;
        while(t<c){
                printf("%d\n",temp->data);
                temp=temp->next;
                t++;
        }
        //printf("%d\n",temp->data);
}

int main(){
        printf("enter the no of elements:");
        int n,item;
        scanf("%d",&n);
        for (int i=0;i<n;i++){
                printf("enter the element:");
                scanf("%d",&item);
                enqueue(item);
        }
        printf("the elements in the queue\n\n");
        disp();
        printf("enter the no of elements to be deleted:");
        scanf("%d",&n);
        for (int i=0;i<n;i++){
                dequeue();
        }
        printf("the elements in the queue are:\n");
        disp();
        printf("enter the no of elements to be inserted:");
        scanf("%d",&n);
        for (int i=0;i<n;i++){
                printf("enter the element:");
                scanf("%d",&item);
                enqueue(item);
        }
        printf("the elements in the queue are: \n");
        disp();
        return 0;
}
