#include<stdio.h>
int main(){
int c;
printf("enter character c");
scanf("%c",&c);
//printf("%d",c);
if(c>=65 && c<=122)
{
    printf("The character is a alphabet");
}
else if(c>=48 && c<=57)
{
    printf("Digits");
}
else{
    printf("Special characters");
}
return 0;
}







