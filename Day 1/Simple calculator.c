//Simple calculator that can perform arithmetic operations
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number1:");//printf is used to print the value
    scanf("%d",&a);// Scanf is used to get user input
    printf("Enter the number2:");
    scanf("%d",&b);
    char c;
    printf("Enter the operator: (+ ,- ,* , /): ");
    scanf(" %c",&c);
    if(c =='+'){
        printf("Addition: %d\n",a+b);
    }
    else if(c =='-'){
        printf("Subtraction: %d\n",a-b);
    }
    else if(c =='*'){
        printf("Multiplication: %d\n",a*b);
    }
    else if(c =='/'){
        if(b!=0){
            printf("Division: %d\n",a/b);
        }
        else{
            printf("Error : Divison by zero");
        }
    }
    
    else{
        printf("Invalid Symbol\n");
    }
    return 0;

}