#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int insert(int arr[],int b, int c, int loc){
    int j;
    j=b-1;
    while (j>=loc-1){
        arr[j+1]=arr[j];
        j--;
    }
    arr[loc-1]=c;
    b++;
    return b;
}
int del(int a[],int n,int loc){
    if(loc<1||loc>n){
        printf("Invalid input!");
        return n;
    }
    else{
        for (int j=loc-1;j<n-1;j++)
            a[j]=a[j+1];
        }
        return n-1;
    }


int main(){
    int b, a[MAX], c, d,loc;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &b);    
    for(int i= 0; i<b; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    while(1){
        printf("1. Insert an element\n2. Delete an element\n3. Display the array\n4.Linear Search\n5.Binary Search\n6.Exit\n");
        printf("Enter choice:");
        scanf("%d",&d);
        switch(d){
            case 1://Insertion
                printf("Enter the element to be inserted: ");
                scanf("%d", &c);
                printf("Enter the location to insert the element: ");
                scanf("%d", &loc);
                b=insert(a,b,c,loc);
                break;
            case 2://Deletion
                printf("Enter the element to be inserted: ");
                scanf("%d", &c);
                printf("Enter the location to insert the element: ");
                scanf("%d", &loc);
                             
                    
                break;
            case 3://Display
                printf("The elements in the array are: ");
                for(int i=0; i<b; i++){
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;
            case 4://Linear Search
                printf("Enter the element to be searched: ");
                scanf("%d", &c);    
                for(int i=0; i<b; i++){
                    if(a[i]==c){
                        printf("Element found at location %d\n", i+1);
                        break;
                    }
                printf("Element not found");
                }                break;
                
            case 5://Binary Search
                printf("Enter the element to be searched: ");
                scanf("%d", &c);    
                int low=0;
                int high=b-1;
                int mid=0;
                mid=(high+low)/2;
                while(low<=high){
                    if(a[mid]==c){
                        printf("Element found on index %d\n", mid+1);
                        break;
                    if(a[mid]<c){
                        low=mid+1;
                    }
                    else{
                        high=mid-1;
                    }
                }
                break;
            case 6://Exit
                exit(0);

        }
    }
    return 0;
}