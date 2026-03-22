#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node*left;
    struct node*right;
}nd;
nd*root=NULL;
nd*insert(nd*root,int item){
    nd*newnode=(nd*)malloc(sizeof(nd));
    newnode->data=item;
    newnode->left=NULL;
    newnode->right=NULL;
    if(root==NULL){
        return newnode;
    }
    nd*current=root;
    nd*parent=NULL;
    while(current!=NULL){
        parent=current;
        if(item<current->data){
            current=current->left;
        }
        else{
            current =current->right;
        }
    }
    if(item<parent->data){
        parent->left=newnode;
    }
    else{
        parent->right=newnode;
    }
    return root;

}
void inorder(nd*root){
        if(root!=NULL){
            inorder(root->left);
            printf("%d ", root->data);
            inorder(root->right);
        }
    }

    int main(){
        int n, item;
        printf("Enter the number of elements: ");
        scanf("%d", &n);
        for(int i=0; i<n; i++){
            printf("Enter element %d: ", i+1);
            scanf("%d", &item);
            root=insert(root,item);
        }
        printf("Inorder traversal of the binary search tree is: \n");
        inorder(root);
        return 0;
    }