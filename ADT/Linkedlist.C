#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
}nd;
struct node*head=NULL;
void create (int item){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        struct node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display(){
    struct node*temp=head;
    if(temp==NULL){
        printf("List is empty!");
    }
    else{
        printf("The elements in the list are: ");
        while(temp!=NULL){
            printf("%d->", temp->data);
            temp=temp->next;
        }
        printf("NULL");
    }
}

int main(){
    int n, item;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &item);
        create(item);
    }
    printf("Linked list is: \n");
    display();
    return 0;
}