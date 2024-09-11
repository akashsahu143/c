#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the value of a&b:");
    scanf("%d%d",&a,&b);
    c=sub(a,b);
    d=add(a,b);
    e=sub(c,d);
    printf("%d%d%d",c,d,e);
return 0;
}
int sub(int x, int y){
    int z;
    z=x-y;
    return z;
}
int add(int x, int y){

    int z;
    z=x+y;
    return z;
}
