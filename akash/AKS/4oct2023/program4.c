#include<stdio.h>
int main(){
    int c;
    printf("Enter the character");
    scanf("%c",&c);
    if(c>=65 && c<=96){
        printf("The alphabet is uppercase");
    }
    else if(c>=97 && c<=122){
        printf("The alphabet is lowercase");
    }
    else{
        printf("Not a alphabet");
    }
    return 0;
}
