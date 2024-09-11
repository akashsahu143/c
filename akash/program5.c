#include<stdio.h>
    int main(){
    int a,b,c,d,e,x,v1,v2,v3;
    printf("enter the value of a,b,c,d & e");
    scanf("%d%d%d%d%d",&a, &b &c, &d, &e);
        v1=c/d;
        v2=b*v1;
        v3=a+v2;
        x=v3-e;
        printf("divsion of v1");
        scanf("%d",v1);
        printf("multiple of b of v1");
        scanf("%d",v2);
        printf("add of a & v2");
        scanf("%d",v3);
        printf("subtraction from v3 to e");
        scanf("%d", x);
        return 0;
}
