#include<stdio.h>
int main(){
 int a,b,c;
 printf("Enter the values of a and b");
 scanf("%d%d",&a,&b);
 c=check(a,b);
 if(c==1){
    printf("The number is same");
 }
 else{
    printf("The number is not same");
 }
 return 0;
}
int check( int a, int b){
    int c;
    if(a==b){
        c=1;
    }
    else{
        c=0;
    }
    return c;
}
