// This program only calculates for 3 digits
#include<stdio.h>
int main(){
    int n,rem,temp,sum=0;
    scanf("%d",&n);
    temp=n;//temp to store the value as temporary
    while(temp>0){
        rem=temp%10;// % removes the last digit of a number
        sum+=rem*rem*rem;
        temp/=10;// / get the next number in the digit
    }
    if(n==sum){
        printf("%d is a Armstrong number",n);
    }
    else{
        printf("%d is not a Armstrong number",n);
    }
}
