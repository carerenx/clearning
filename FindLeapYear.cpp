#include <stdio.h>
int main(void){
	int a = 1900,i = 0;
	while(a<=2019){
		if(a%4==0&&a%100!=0){
			printf("%d\t",a);
		}
		if(a%100==0&&a%400==0){
			printf("%d\t",a);
		}
		a++;	
	}
}