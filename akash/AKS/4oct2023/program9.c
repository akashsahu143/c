#include<stdio.h>
int main(){
    int sal,age,c;
    printf("Enter the salary and age of the employee");
    scanf("%d%d",&sal,&age);
    c=check(sal,age);
    if(c==1){
        printf("Qualified");
    }
    else{
        printf("Not Qualified");
    }
    return 0;
}
int check(int a,int b){
    int c;
    if(a>15000 && b>20)
    {
        c=1;
    }
    else{
        c=0;
    }
    return c;
}
