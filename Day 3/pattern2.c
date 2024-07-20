 Write a C program to display a pattern like a right angle triangle with a number.
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

/*Output
Enter the number of rows:5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/
