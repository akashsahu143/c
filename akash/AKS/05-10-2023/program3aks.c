#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g,h;
    printf("enter the values of a&b:");
    scanf("%d%d",&a,&b);
    c=mult(a,b);
    d=add(a,b);
    e=sub(a,b);
    f=add(c,d);
    g=add(f,d);
    h=sub(d,c);
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", c,d,e,f,g,h);
    return 0;
}
int mult(int x,int y){
    int z;
    z=x*y;
    return z;
}
int add(int x, int y){
    int z;
    z=x+y;
    return z;
}
int sub(int x, int y){
    int z;
    z=x-y;
    return z;
}
