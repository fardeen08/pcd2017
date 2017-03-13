#include<stdio.h>
#include<math.h>

float convdeg(float deg){
	float a = (M_PI/180)*deg;
    return a;
}
float compute_sin(float x){
	int i;
	float term,sum,diff,prev;
	term=sum=diff=x;
	for(i=3;diff>0.000001;i+=2){
		prev=term;
		term=(-term*x*x)/(i*(i-1));
		sum+=term;
		diff=fabs(prev-term);
	}
	return sum;
    }

int main(){
	float deg;
	printf("enter the degree:\n");
	scanf("%f",&deg);
	float rad=convdeg(deg);
	float sine=compute_sin(rad);
	printf("sin(%f)=%f\n",rad,sine);
	return 0;
}

