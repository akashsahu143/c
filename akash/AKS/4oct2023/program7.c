#include<stdio.h>
int main(){
 int a,b,c,d,e;
 printf("Enter the number ");
 scanf("%d%d",&a,&b);
 c=check(a,b);
 if(c==1){
      d=sum(a,b);
      printf("%d",d);
 }
 else{
    e=diff(a,b);
    printf("%d",e);
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
int sum(int a,int b){
    int sum=a+b;
    return sum;
}
int diff(int a,int b){
int diff;
diff=a-b;
return diff;
}








