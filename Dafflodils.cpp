//求所有个位、十位、百位的三次方加和等于这个数本身的数
#include<stdio.h>
int main(){
int i,j,k,n;                            //i为100位，j为10为，k为个位
printf("parcissus numbles are:\n");

for(n=100;n<1000;n++){
i=n/100;
j=n/10-i*10;
k=n-100*i-10*j;
if(n==i*i*i+j*j*j+k*k*k)
printf("%d\n",n);
}

printf("\n");
}