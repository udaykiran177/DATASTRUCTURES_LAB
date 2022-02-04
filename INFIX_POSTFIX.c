#include<stdio.h>
#include<string.h>

char a[20];

int top=-1;

void push(char item){
        if (top>20){
                printf("STAK OVERFLOW");
        }
        else{
                //top=top+1;
                a[++top]=item;
        }
}

char pop(){

        if (top<0){
                //printf("STACK UNDERFLOW");
                return -1;
        }
        else{
                //top=top-1;
                //printf("%d",a[top]);
                return a[top--];
        }
}

int isopran(char c){
        if (c>=97 && c<=123){
                return 1;
        }
        else{
                return 0;
        }
}

int isopere(char c){
        if (c=='*'||c=='/'||c=='+'||c=='-'){
                return 1;
        }
        else{
                return 0;
        }
}

int preced(char c){
        if (c=='*'||c=='^'||c=='/'){
                return 2;
        }
        else if(c=='+'||c=='-'){
                return 1;
        }
        else{
                return 0;
        }
}

int main(){
        printf("enter the infix expression:");
        char ch[20];
        scanf("%s",ch);
        //ch='('+ch+')'
        int len=strlen(ch);
        //printf("%d",len);
        //push('(');
        for (int i=0;i<len;i++){
                if (isopran(ch[i])){
                        printf("%c",ch[i]);
                }
                else if (ch[i]=='('){
                        push(ch[i]);
                }
                else if(isopere(ch[i])){
                        if (top==1){
                                //printf("in the else-if-2 if cond");
                                push(ch[i]);
                        }
                        else{
                                //printf("in the else-if-2 else cond");
                                //char temp=pop();
                                int m1=preced(ch[i]);
                                int m2=preced(a[top-1]);
                                if (m1>m2){
                                        //printf("in the else-if-2 else(ifcond)\n");
                                        //push(temp);
                                        push(ch[i]);
                                }
                                else{
                                        //printf("m1<m2\n");
                                        printf("%c",pop());
                                        push(ch[i]);
                                }
                        }

                }
                else if(ch[i]==')'){
                        char x;
                        while(x=pop()!='('){
                                printf("%c",x);
                        }
                }
        }
        //printf("\n\n\n");
        if(top>=0){
        while(top>=0){
                printf("%c",a[top]);
                top--;
        }
        }



        return 0;
}
