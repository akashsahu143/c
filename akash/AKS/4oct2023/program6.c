#include<stdio.h>
int main(){
 int a,b,c,sum;
 printf("Enter the number ");
 scanf("%d%d",&a,&b);
 c=check(a,b);
 if(c==1){
    printf("The numbers are same");
 }
 else{
    sum=a+b;
    printf("%d",sum);
 }
return 0;
}
int check(int a,int b){
        int c;
        if(a==b){
            c=1;
        }
        else{
            c=0;
        }
        return c;
}
