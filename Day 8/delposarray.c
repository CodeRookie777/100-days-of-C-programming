Write a C program to delete element from an array
#include<stdio.h>
void main(){
    int n,arr[50],i,pos;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the position:");
    scanf("%d",&pos);
        if((pos<0||pos>n)){
            printf("Invalid");
        }
        else{
            for(i=pos-1;i<n-1;i++){
                arr[i]=arr[i+1];
            }
        }
        n--;
        printf("Elements after deletion:");
        for(i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
/*Output
Enter the no of elements: 5
Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Enter the position:4
Elements after deletion:1 2 3 5 
*/
