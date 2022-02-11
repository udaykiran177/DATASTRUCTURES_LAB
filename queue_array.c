#include<stdio.h>

int a[100];

int n,front=0,rear=0;

void push(int item){
        if (front>n){
                printf("mqmory limit exceeded");
        }
        else{
                a[rear++]=item;
        }
}

int pop(){
        if (front==rear){
                printf("the queue is empty");
        }
        else{
                return a[front++];
        }

}

void disp(){
        for (int i=front;i<rear;i++){
                printf("%d \n",a[i]);
        }
}

int main(){
        int e;
        printf("enter the no of elements:");
        scanf("%d",&n);
        for (int i=0;i<n;i++){
                printf("enter the element:");
                scanf("%d",&e);
                push(e);
        }
        printf("after the insertion elements in the queue will be:\n");
        disp();
        printf("enter the no of elements to pop:");
        int e1;
        scanf("%d",&e1);
        for (int i=0;i<e1;i++){
                printf("%d \n",pop());
        }
        printf("elements in the queue will be:");
        disp();
        printf("front:%d and rear:%d",front,rear);
        return 0;
}
