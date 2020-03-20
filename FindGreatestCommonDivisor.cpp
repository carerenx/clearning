#include<stdio.h>
int main(){
int a=0,b=0,r=0,temp=0;
printf("please input two numbers:");
scanf("%d,%d",&a,&b);
printf("%d\n",b);
if(b>a){
temp = a;
a = b;
b = temp;
}
r=a%b;
while(r!=0){
a=b;
b=r;
r=a%b;
printf("a=%d,b=%d\n",a,b);
}
printf("Greatest common divisor is:%d\n",b);
}