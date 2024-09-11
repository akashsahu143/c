#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter the number");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    d=sub(a,b);
    e=multiply(a,b);
    f=div(a,b);
    printf("%d \n",c);
    printf("%d \n",d);
    printf("%d \n",e);
    printf("%d \n",f);
    return 0;
}
int add(int c,int d){
    int e;
    e=c+d;
    return e;
}
int sub(int c,int d){
    int e;
    e=c-d;
    return e;
}
int multiply(int c,int d){
    int e;
    e=c*d;
    return e;
}
int div(int c,int d){
    int e;
    e=c/d;
    return e;
}














