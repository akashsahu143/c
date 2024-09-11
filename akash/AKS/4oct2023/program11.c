#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number");
    scanf("%d",&a);
    b=check(a,b);
    if(b==1){
        printf("Is a multiple of 5");
    }
    else{
        printf("Not a multiple of 5");
    }
    return 0;
}
int check(int a){
    int c;
    if(a%5==0){
        c=1;
    }
    else{
        c=0;
    }
    return c;
}
