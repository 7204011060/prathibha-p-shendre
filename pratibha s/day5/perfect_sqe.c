#include<stdio.h>
#include<math.h>
int main(){
    int inputnumber=0,sqrt1=0;
    printf("enter a number: \n");
    scanf("%d",&inputnumber);
    sqrt1=sqrt(inputnumber);
    printf("square root of %d is : %d \n",inputnumber,sqrt1);

    if(sqrt1*sqrt1 == inputnumber){
        printf("perfect square");
    }
    else{
        printf("not a perfect square");
    } 
    return 0;
 }