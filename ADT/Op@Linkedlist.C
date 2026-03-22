#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
}nd;
struct node*head=NULL;
void insert(int item){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(head==NULL){//If the list is empty, make the new node the head
        head=newnode;
    }
    else{//If the list is not empty, make the new node point to the current head and then make the new node the head
        newnode->next=head;
        head=newnode;
    }
    
}
void ins_at_fst(int item){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=item;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }

}
void ins_pos(int item, int pos){
    if(pos==1)
        ins_at_fst(item);
    else{
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=item;
        newnode->next=NULL;
        struct node*temp=head;
        for(int i=1; i<pos-1; i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void del_at_fst(){
    if(head!=NULL){
        struct node*temp=head;
        head=head->next;
        free(temp);
    }
}
void del_at_last(){
    if(head!=NULL){
        struct node*temp=head;
        if(temp->next==NULL){
            head=NULL;
            free(temp);
        }
        else{
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            free(temp->next);
            temp->next=NULL;
        }
    }
}
void del_at_pos(int pos){
    if(pos==1)
        del_at_fst();
    else{
        struct node*temp=head;
        for(int i=1; i<pos-1; i++){
            temp=temp->next;
        }
        struct node*del=temp->next;
        temp->next=del->next;
        free(del);
    }
}
void display(){
    struct node*temp=head;
    if(temp==NULL){
        printf("List is empty!");
    }
    else{
        printf("The elements in the list are: ");
        printf("NULL<-");
        while(temp!=NULL){
            printf("%d<-", temp->data);
            temp=temp->next;
        }
    }
}
void search(){
    int item, pos=1;
    printf("Enter the element to be searched: ");
    scanf("%d", &item);
    struct node*temp=head;
    while(temp!=NULL){
        if(temp->data==item){
            printf("Element found at position %d", pos);
            return;
        }
        temp=temp->next;
        pos++;
    }
    printf("Element not found in the list!");
}
int main(){
    int n, item, choice, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &item);
        insert(item);
    }
    while(1){
        printf("\n1.Insert at first\n2.Insert at last\n3.Insert at position\n4.Delete at first\n5.Delete at last\n6.Delete at position\n7.Display\n8.Search\n9.Exit\n");
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                        printf("Enter element to be inserted: ");
                        scanf("%d", &item);
                        ins_at_fst(item);
                        break;
            case 2:
                        printf("Enter element to be inserted: ");
                        scanf("%d", &item);
                        insert(item);
                        break;
            case 3:
                        printf("Enter element to be inserted: ");
                        scanf("%d", &item);
                        printf("Enter position to insert the element: ");
                        scanf("%d", &pos);
                        ins_pos(item, pos);
                        break;
            case 4:
                        del_at_fst();
                        break;
            case 5:
                        del_at_last();
                        break;
            case 6:
                        printf("Enter position to delete the element: ");
                        scanf("%d", &pos);
                        del_at_pos(pos);
                        break;
            case 7:
                        display();
                        break;
            case 8:
                        search();
                        break;
            case 9:
                        exit(0);
        }
    }
    return 0;

}