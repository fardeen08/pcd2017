
#include<stdio.h>
#include<math.h>

float newt_sqrt(float n){
	float diff,prev;
	float x=10;
	do{
		prev=x;
		x=x-((x*x-n)/(2*x));
		diff=fabs(prev-x);
	}while(diff>0.000001);
	return x;
}
int main(){
	float n;
	printf("enter the number:\n");
	scanf("%f",&n);
	float result=newt_sqrt(n);
	printf("the square root of the number is %f\n",result);
	return 0;
}


