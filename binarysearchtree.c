#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
}*new,*temp;

struct node* root=NULL;

void traverse(struct node* root,int item){
    temp=root;
    if (temp==NULL){
        temp->prev->next=new;
    }
    else{
    if (temp->data>item){
            traverse(temp->next,item);
    }
    else{
            traverse(temp->prev,item);
    }
    }
}

void insert(int item){
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->prev=NULL;
    new->next=NULL;
    if (root==NULL){
        root=new;
    }
    else{
        if (root->data>item){
            traverse(root->next,item);
        }
        else{
            traverse(root->prev,item);
        }
    }
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->prev);
        printf("%d",root->data);
        inorder(root->next);
    }
}

int main(){
    int n,item;
    printf("enter the no of numbers:");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("enter the element:");
        scanf("%d",&item);
        insert(item);
    }
    printf("inorder expression is:\n");
    inorder(root);
    return 0;
}
