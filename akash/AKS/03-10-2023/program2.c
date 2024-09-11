#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the values");
    scanf("%d%d",&a,&b);
    c= add(a, b);
    d= multiply(a,b);
    printf("%d \n",c);
    printf("%d \n",d);
    return 0;
}
int add(int p,int q){
    int r;
    r=p+q;
    return r;
}
int multiply(int p, int q){
    int r;
    r=p*q;
    return r;
}


























