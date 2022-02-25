#include<stdio.h>
int a[10],c=0,n,front=0,rear=0;

void insert_rear(int item){
        if (c==10){
                printf("the queue is full");
        }
        else{
                a[rear]=item;
                rear=(rear+1)%n;
                c++;
        }
}

void insert_front(int item){
        if (c==10){
                printf("the queue is full");
        }
        else{
                if (front==0){
                        //printf("can't perform front insertion as you reach the end");
                        front=n-1;
                        a[front]=item;
                }
                /*a[--front]=item;
                c++;*/
                else{
                        a[--front]=item;
                }

        }
}

void del_front(){
        if (c==0){
                printf("queue is empty");
        }
        else{
                front=(front+1)%n;
                c--;
        }
}
void del_rear(){
        if (c==0){
                printf("queue is empty");
        }
        else{
                if (rear==0){
                        rear=n-1;
                }
                else{
                        rear--;
                }
                c--;
        }
}

void disp(){
        int temp=front;
        while(temp!=rear){
                printf("%d\n",a[temp]);
                temp=(temp+1)%n;
        }
}

int main(){
        int item;
        printf("enter the no of elements:");
        scanf("%d",&n);
        for (int i=0;i<n;i++){
                printf("enter the element:");
                scanf("%d",&item);
                insert_rear(item);
        }
        printf("the elements in the queue are:\n");
        disp();
        int fro;
        printf("enter the no of elements to be inserted in front:");
        scanf("%d",&fro);
        for (int i=0;i<fro;i++){
                printf("ente the element :");
                scanf("%d",&item);
                insert_front(item);
        }
        printf("\nthe elements are:\n");
        disp();
        printf("\nenter the element to be inserted in rear:");
        scanf("%d",&item);
        insert_rear(item);
        printf("\nthe elements are:\n");
        disp();
        printf("the no of elemnts to be deleted_front:");
        scanf("%d",&fro);
        for (int i=0;i<fro;i++){
                del_front();
        }
        printf("\nthe elements in the queue are:\n");
        disp();
        printf("the elements to be deleted_rear:\n");
        scanf("%d",&fro);
        for ( int i=0;i<fro;i++){
                del_rear();
        }
        printf("\nthe elements are:\n");
        disp();
        return 0;
}
