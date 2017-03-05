#include<stdio.h>
float comp(float a,float b){
	if(a>b){
		return a;
	}
	else if(a==b){
		return a;
	}
	else{
		return b;
	}
}

int main(){
	float a,b;
	printf("enter two numbers:\n");
	scanf("%f%f",&a,&b);
	float c=comp(a,b);
	printf("the larger number is:%f\n",c);
	return 0;
}
