#include<stdio.h>
    int main(){
        int a,b,m,x;
        printf("enter the values of a&b:");
        scanf("%d%d",&a,&b);
        m= find_bigger(a,b);
        x=find_hcf(a,b,m);
        printf("%d",x);
        return 0;
}
int find_bigger(int a, int b){
int c;
if(a==b){
c=a;
}else if(a>b){
 c=a;
}
else{
    c=b;
}
return c;
}
int find_hcf (int x, int y, int z){
 int i,f1,f2,t;
 for(i=1; i<=z;i=i+1){
    if(x%i==0){
        f1=i;
 }
    if(y%i==0){
        f2=i;
    }

if(f1==f2){
    t=f1;
}
}
 return t;
}
