#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number");
    scanf("%d",&a);
    b=check(a,b);
    if(b==0){
        printf("The number is zero ");
       }
        else if(b==1){
            printf("The number is positive");
        }
        else{
            printf("the number is negative");
        }
        return 0;
}
int check(int a ){
    int c;
    if(a==0){
        c=0;
    }
    else if(a>0){
        c=1;
    }
    else{
        c=2;
    }
    return c;
}
