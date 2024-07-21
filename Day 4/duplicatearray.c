Write a program in C to count the total number of duplicate elements in an array.
#include<stdio.h>
int main(){
    int i,j,n,count=0,arr[30];
    printf("Enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element %d:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
    }
    printf("Total no of duplicate number in the array is:%d",count);
}
/*Output
Enter the no of elements:4
Element 0:1
Element 1:2
Element 2:3
Element 3:4
Total no of duplicate number in the array is:0
*/
