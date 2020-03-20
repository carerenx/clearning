#include<stdio.h>
void bubbleSort(int a[],int n);
int mian(){
	int r[]={8,2,4,3,8,7,6,9},n=8;
	bubbleSort(r,n);
	printf("%d",r[1]);
	return 0;
}

void bubbleSort(int a[],int n){
int i,j,temp,flag;
for(i=n;i>=1;i--){
flag=0;
for(j=1;j<i;j++){
	if(a[j-1]>a[j]){
	temp=a[j-1];
	a[j-1]=a[j];
	a[j]=temp;
	flag=1;
	}
	if(flag==0){
//	return a[];
	}
}
}
//return a;
}
