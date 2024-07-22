Write a C program to count even and odd elements in array.
#include<stdio.h>
void main(){
    int n,arr[50],even=0,odd=0,i;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element %d:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Count of even number in the array is %d\n",even);
    printf("Count of odd number in the array is %d",odd);
}
/*Output
Enter the no of elements:5
Element 0:1
Element 1:2
Element 2:3
Element 3:4
Element 4:5
Count of even number in the array is 2.
Count of odd number in the array is 3.
*/
