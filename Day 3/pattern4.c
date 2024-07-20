Write a program in C to make such a pattern like a right angle triangle with the number increased by 1
#include<stdio.h>
int main(){
    int i,j,n,k=1;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
}
/*Output
Enter the number of rows:5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/

