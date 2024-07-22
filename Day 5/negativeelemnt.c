Write a C program to count number of negative elements in the array.
#include<stdio.h>
void main(){
    int i,arr[50],n,count=0;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element %d:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            count++;
        }
    }
    printf("Number of negative elements in the array: %d",count);
    
}
/* Output
Enter the no of elements:5
Element 0:1
Element 1:2
Element 2:3
Element 3:4
Element 4:-1
Number of negative elements in the array: 1
*/
