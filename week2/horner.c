#include<stdio.h>

float horner(int deg,float a[deg+1],float x){
	int i;
    float sum=0;
	for(i=deg;i>0;i--){
		sum=(sum+a[i])*x;
	}
	sum+=a[0];
	return sum;
}

int main(){
	int deg;
    float x;
	printf("enter the degree of the polynomial:\n");
	scanf("%d",&deg);
	printf("enter the value of x:\n");
	scanf("%f",&x);
	
	float a[deg+1];
    int i;
	for(i=deg;i>=0;i--){
		printf("enter the coefficient of x^%d:\n",i);
		scanf("%f",&a[i]);
	}
	 float sum=horner(deg,a,x);
	 printf("the sum is %f\n",sum);
	 return 0;
 }


