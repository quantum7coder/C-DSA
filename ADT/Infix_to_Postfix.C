#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char stk[MAX];
int top=-1;
void push(char x){
    if(top==MAX-1){
        printf("STACK OVERFLOW!\n");
    }
    else{
        top++;
        stk[top]=x;
    }
}
char pop(){
    char item;
    if(top==-1){
        printf("STACK UNDERFLOW!\n");
        return -1;
    }
    else{
        item=stk[top];
        top--;
        return item;    
    }
    return item;
}
int prece(char x){
    if(x=='^'||x=='$')
        return 3;
    else if(x=='*'||x=='/'||x=='%')
        return 2;
    else if(x=='+'||x=='-')
        return 1;
    else
        return 0;
}
int main(){
    char infix[MAX], postfix[MAX];
    int i,k=0;
    char symbol,x;
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    top=-1;
    for (int i=0; infix[i]!='\0';i++){
        symbol=infix[i];
        if(isalnum(symbol)){
            postfix[k++] = symbol;
        }
        else if(symbol=='('){
            push(symbol);
        }
        else if(symbol==')'){
            while((x=pop())!='('){
                postfix[k++] = x;
            }
        }
        else{
            while(prece(stk[top])>=prece(symbol)){
                postfix[k++] = pop();
            }
            push(symbol);
        }
        postfix[k]='\0';
        printf("The postfix expression is: %s",postfix);
        return 0;
        }
        
    }