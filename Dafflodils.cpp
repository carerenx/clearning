//�����и�λ��ʮλ����λ�����η��Ӻ͵���������������
#include<stdio.h>
int main(){
int i,j,k,n;                            //iΪ100λ��jΪ10Ϊ��kΪ��λ
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