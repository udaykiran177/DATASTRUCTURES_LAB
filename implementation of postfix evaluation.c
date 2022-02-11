#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

double a[50];
int n,top=0;

void push(double item){
        if(top>20){
                printf("overflow\n");
        }
        else{
                a[top++]=item;
        }
}

double pop(){
        if (top<0){
                printf("underflow\n");
        }
        else{
                return a[--top];
        }
}

int isope(char e){
        if (e=='*' || e=='+' || e=='-' || e=='/'){
                return 1;
        }
        else{
                return 0;
        }
}

int main(){
        char c[20];
        int res=0;
        printf("enter the expression");
        scanf("%s",c);
        int l=strlen(c);
        for (int i=0;i<l;i++){
                if (isope(c[i])){
                        double x1=pop();
                        //int x1=x-'0';
                        //printf("x1:%d\n",x1);
                        double y1=pop();
                        //int y1=y-'0';
                        //printf("y1:%d\n",y1);
                        switch(c[i]){
                                case '+':
                                        //res+=x1+y1;
                                        //printf("add:%d",res);
                                        push(x1+y1);
                                        break;
                                case '-':
                                        //res+=x1-y1;
                                        push(y1-x1);
                                        break;
                                case '*':
                                        //res+=x1*y1;
                                        //printf("mul:%d",res);
                                        push(x1*y1);
                                        break;
                                case '/':
                                        //res+=x1/y1;
                                        push(y1/x1);
                                        break;
                                 case '^':
                                        for (int j=0;j<x1;j++){
                                                y1*=y1;
                                        }
                                        //res+=x1;
                                        push(y1);
                                        //push(pow(x1,y1));
                                        break;
                                default:printf("Invalid expression is passed");
                        }


                }
                else{
                        double m=c[i]-'0';
                        push(m);
                }

        }
        printf("result of given expression:%1f\n",a[top-1]);
        //printf("result: %d\n",res);
        return 0;

}
