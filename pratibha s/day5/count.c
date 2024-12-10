#include<stdio.h>
int main(){
    int inputNumber=0,countnumber=0,digit;
    printf("enter a number:  ");
    scanf("%d",&inputNumber);

    while(inputNumber!=0){
        digit=inputNumber%10;
        countnumber++;
        inputNumber=inputNumber/10;
    }
    printf("The count of a number is : %d",countnumber);
    return 0;
}