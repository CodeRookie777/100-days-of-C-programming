Write a C program to search element in an array.
#include<stdio.h>
void main(){
    int i,s,arr[50],n;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&arr[i]);
    }
    int found = 0;
    printf("Enter the element to be searched: ");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(arr[i]==s){
            found =1;
            break;
        }
    }
    if(found ==1){
        printf("Search element %d is found in the index of %d.",s,i+1);
    }
    else{
        printf("Seached element not found.");
    }
}
/*Output
Enter the no of elements:5
Element 0: 1
Element 1: 2
Element 2: 3
Element 3: 4
Element 4: 5
Enter the element to be searched: 5
Search element 5 is found in the index of 5.
*/
