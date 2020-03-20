#include <stdio.h>
#include <math.h>

void getGrowthRate();

int main(){
float a=1.0,r=0.1;
int y=1;
while(y<=10){
a=a*(1+r);
y++;
}
printf("%f\n",a);
getGrowthRate();
}

void getGrowthRate(){
float a,r,y;
r=0.1;
y=10;
a=pow((1+r),y);
printf("%f\n",a);
}