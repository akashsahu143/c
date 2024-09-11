#include<stdio.h>
#include<math.h>
int main(){
    int rem,rem2,num,n,sum=0,count=0,p,m,a;
    printf("Enter the number");
    scanf("%d",&num);
    n=num;
    m=num;
   // printf("%d \n",n);
   // printf("%d \n",m);
    while(n>0){
        rem=n%10;
        n=n/10;
        count=count+1;
        a=count;
    }
   // printf("%d",count);
    while(count>0){
      rem2= m%10;
    pow(rem2,count);
      sum=sum+pow(rem2,a);
      m=m/10;
      count=count-1;\
      //printf("%d \n",sum);
      // printf("%d \n",rem2);
       // printf("%d \n",m);
    }

    if(sum==num){
        printf("The number is armstrong");
    }
    else{
        printf("Not armstrong");
    }
    return 0;
}








