#include<stdio.h>
#include<string.h>
int main(){
    char string1[100],string2[100];
    printf("Enter a string: \n");
    scanf("%[^\n]s",string1);
    strcpy(string2,string1);
    strrev(string1);
    int res=strcmp(string1,string2);
    if(res==0){
        printf("The string is palindrome");
    }
    else{
        printf("The string is not a palindrome");
    }
    return 0;
}