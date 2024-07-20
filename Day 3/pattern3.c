Write a program in C to make such a pattern like a right angle triangle with a number which will repeat a number in a row.
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
}
/*Output
Enter the number of rows:5
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
*/

