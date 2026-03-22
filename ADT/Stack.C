#include <stdio.h>
#include <stdlib.h>
#define MAXSTK 10
void push(int stk[],int*top,int item){
    if(*top==MAXSTK-1){
     printf("STACK OVERFLOW!\n");
    }
    else{
        printf("Performing push operation\n");
        (*top)++;
        stk[*top]=item;
        printf("Element pushed into the stack: %d\n",stk[*top]);
    }
}
int pop(int stk[],int*top){
    int item;
    if(*top==-1){
        printf("STACK UNDERFLOW!\n");
    }
    else{
        printf("performing pop operation\n");
        item=stk[*top];
        (*top)--;
        printf("Element deleted from stack is : %d",item);
    }
    return item;
}
void display(int stk[],int *top){
    printf("\nCurrent stack is: \n");
    for(int i=*top;i>=0;i--){
        printf("\n%d\n",stk[i]);
        printf("____\n");
    }
}
int main(){
int *stk,top=-1,item,choice;
stk=(int*)malloc(MAXSTK*sizeof(int));
if(stk==NULL)
    printf("Invalid!");
while(1){
    printf("\n1.Push\n2.Pop\n3.Dispaly\n4.Exit\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
                    printf("Enter iten: ");
                    scanf("%d",&item);
                    push(stk,&top,item);
                    break;
        case 2:
                    item=pop(stk,&top);
                    break;
        case 3:
                    display(stk,&top);
                    break;
        }
}
return 0;
}
