#include<stdio.h>
int main(){
   int a,b,c,d,e;
   printf("Enter the values of integers a and b");
   scanf("%d%d",&a,&b);
   c=add(a,b);
   d=sub(a,b);
   e=multiply(c,d);
   printf("%d",e);
   return 0;
}
int add(int a, int b){
    int sum;
    sum=a+b;
    return sum;
}
int sub(int a,int b){
    int sub;
    sub=a-b;
    return sub;
}
int multiply(int c,int d){
    int m;
    m=c*d;
    return m;
}
















