Write a C program that prompts the user to enter a number of rows and prints a square grid of # characters with each side of the grid equal to the number of rows entered. Implement this using nested for loops.
#include<stdio.h>
void main(){
        int i,j,num;
        printf("Enter the number of rows: ");
        scanf("%d",&num);
        for(i=0;i<num;i++){
            for(j=0;j<=num;j++){
                printf("#");
            }
            printf("\n");
        }
        
    }
/*Output
Enter the number of rows: 5
######
######
######
######
######
*/
