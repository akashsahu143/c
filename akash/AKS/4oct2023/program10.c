#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the number");
    scanf("%d",&a);
    b=checkeven(a);
    if(b==1){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}
int checkeven(int a){
    int c;
    if(a%2==0){
        c=1;
    }
    else{
        c=0;
    }
    return c;

}
