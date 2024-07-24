Write a C program to put even and odd elements of array in two separate array.
#include<stdio.h>
int main(){
    int i,n,arr[50],e[50],o[50];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element %d: ",i);
        scanf("%d",&arr[i]);
    }
    int ec=0,oc=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            e[ec]=arr[i];
            ec++;
        }
        else{
            o[oc]=arr[i];
            oc++;
        }
    }
    printf("Even numbers in the array: ");
    for(i=0;i<ec;i++){
        printf("%d ",e[i]);
    }
    printf("\n");
    printf("Odd numbers in the array: ");
    for(i=0;i<oc;i++){
        printf("%d ",o[i]);
    }
}
/*Output
Enter the number of elements:10
Element 0: 1
Element 1: 2
Element 2: 3 
Element 3: 4
Element 4: 5
Element 5: 6
Element 6: 7
Element 7: 8
Element 8: 9
Element 9: 10
Even numbers in the array: 2 4 6 8 10 
Odd numbers in the array: 1 3 5 7 9 
*/
