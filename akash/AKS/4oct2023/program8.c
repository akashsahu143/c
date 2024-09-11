#include<stdio.h>
int main(){
    int a,b,c,d,e,f,sum,sub1,sub2;
    printf("Enter the values of a and b");
    scanf("%d%d",&a,&b);
    c=comparison(a,b);
    if(c==0){
            d=work1(a,b);
            printf("%d",d);
    }
    else if(c==1)
    {
         e=subf(a,b);
         printf("%d",e);
    }
    else{
         f=subg(a,b);
         printf("%d",f);
    }
    return 0;
}
int comparison(int a ,int b){
     int c;
     if(a==b){
        c=0;
     }
     else if(a>b){
        c=1;
     }
     else{
        c=2;
     }
    return c;


}
int work1(int a,int b){
    int add;
    add=a+b;
    return add;
}
int subf(int a,int b){
    int sub1;
    sub1=a-b;
    return sub1;
}
int subg(int a,int b){
    int subg;
    subg=b-a;
    return subg;
}










