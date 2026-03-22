#include <stdio.h>
#include <stdlib.h>
#define MAXQ 10
int CQ[MAXQ], front=-1, rear=-1;
void enqueue(int item){
    if ((front==0&&rear==MAXQ-1)||(front==rear+1)){
        printf("\nOVERFLOW!\n");
        return;
    }
    if(front==-1){
        front=rear=0;
    }
    else if (rear==MAXQ-1&&front!=0){
        rear=0;
    }
    else{
        rear++;
    }
    CQ[rear]=item;
    printf("Element enqueued into the queue: %d\n",item);
    }
int dequeue(){
    int item;
    if(front==-1){
        printf("\nUNDERFLOW!\n");
        return -1;
    }
    item=CQ[front];
    if(front=rear){
        front=rear=-1;
    }
    else if (front==MAXQ-1){
        front=0;
    }
    else{
        front++;
    }
    printf("Element dequeued from the queue is : %d\n",item);
    return item;
}
int main(){
    int item, choice;
    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                        printf("Enter item: ");
                        scanf("%d",&item);
                        enqueue(item);
                        break;
            case 2:
                        item=dequeue();
                        break;
            case 3:
                        exit(0);
        }
    }
    return 0;
}