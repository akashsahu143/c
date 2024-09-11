#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter the values of a,b,c,d and e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    f=function(a,b,c,d,e);
    printf("%d",f);
    return 0;
}
int function(int a,int b,int c,int d,int e){
    int n1,n2,n3,X;
    n1=c/d;
    n2=b*n1;
    n3=a+n2;
    X=n3-e;
    return X;
}








