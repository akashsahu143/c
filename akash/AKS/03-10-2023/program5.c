#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the values of a,b,c and d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=add(a,b,c,d);
    printf("%d",e);
    return 0;
}
int add( int a,int b,int c,int d){
    int n1,n2,X;
    n1=a+b;
    n2=c-d;
    X=n1*n2;
    return X;
}








