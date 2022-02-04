#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct me{
        char data;
        struct me *next;
}*temp,*newnode;

struct me *head=NULL;
struct me *tail=NULL;

void push(char item){
        newnode=(struct me*)malloc(sizeof(struct me));
        newnode->data=item;
        newnode->next=NULL;
        if (head==NULL){
                head=newnode;
                tail=newnode;
        }
        else{
                tail->next=newnode;
                tail=newnode;
        }
}

char pop(){
        temp=head;
        char m;
        while(temp->next->next!=NULL){
                temp=temp->next;
                m=temp->next->data;
        }
        temp->next->next=NULL;
        return m;
}

void disp(){
        temp=head;
        while(temp->next!=NULL){
                printf("%c",temp->data);
                temp=temp->next;
        }
        printf("%c",temp->data);
}

int main(){
        char exp[10];
        char *e;
        printf("enter the expression:");
        scanf("%s",exp);
        int l=strlen(exp);
        e=exp;
        for (int i=0;i<l;i++){
                push(exp[i]);

        }
        disp();//to display the elements in the stack
        printf("%c",pop());//for poping an element
}
