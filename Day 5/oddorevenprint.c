Write a C program to print even and odd elements in array.
#include<stdio.h>
void main(){
    int odd=0,even=0,n,arr[50],i;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Even numbers in the array: ");
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
            even+=1;
        }
    }
    printf("\n");
    printf("Odd numbers in the array: ");
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
            odd+=1;
        }
    }
    printf("\n");
    
    printf("Even no of numbers in the array: %d\n",even);
    printf("Odd no of numbers in the array: %d",odd);
}
/* Output
Enter the no of elements:5
Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Even numbers in the array: 2 4 
Odd numbers in the array: 1 3 5 
Even no of numbers in the array: 2
Odd no of numbers in the array: 3
*/
