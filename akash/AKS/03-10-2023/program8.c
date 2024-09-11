#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the values of a and b");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("%d",c);
    return 0;
}
int add( int a,int b){
    int c;
    c=a+b;
    return c;
}









