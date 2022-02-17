#include<stdio.h>

int a[10]={NULL},len=0;

void insert(int item){
    int n=item%10;
    //int i=n;
    while(a[n]!=NULL){
        n++;
    }
    a[n]=item;
    len++;
}

void display(){
    for (int i=0;i<10;i++){
        printf("%d -- %d \n",i,a[i]);
    }
}

void search(int item){
    int i=item%10;
    while(a[i]!=item && i<10){
        i++;
        //printf("%d",i);
    }
    //printf("%d",i);
    if (i>=10){
        printf("the element not found");
    }
    else{
        printf("%d element in the index %d",item,i);
    }
}

int main(){
    int n,item;
    printf("enter the no of elements to be inserted:");
    scanf("%d",&n);
    for (int j=0;j<n;j++){
        printf("enter the item to be inserted:");
        scanf("%d",&item);
        insert(item);
    }
    display();
    printf("enter the element to be searched:");
    scanf("%d",&n);
    search(n);
    return 0;
}