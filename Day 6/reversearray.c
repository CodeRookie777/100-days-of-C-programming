Write a C program to find reverse of an array. 
#include<stdio.h>
void main(){
    int arr[40],i,n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("Reveresed array : ");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}
/*Output
Enter the no of elements:5
Element 0:1
Element 1:2
Element 2:3
Element 3:4
Element 4:5
Reveresed array : 5 4 3 2 1 
*/
