//This program is used to sum of all numbers in the array
#include<stdio.h>
int main(){
    int i,n,arr[50],sum=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element %d:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("Sum of all elements stored in the array: %d",sum);
}
