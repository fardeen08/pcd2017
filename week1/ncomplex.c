#include <stdio.h>
struct complex
{
	int real, img;
};
struct complex add(struct complex a[], int n)
{
	struct complex c;
	c.real=0;
	c.img=0;
	for(int g=0; g<n; g++)
	{
	    c.real= c.real + a[g].real;
	    c.img= c.img + a[g].img;
	}
	return c;
}
int main()
{
	struct complex a[10], c;
	int n;
	printf("enter no. of numbers to be added");
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		printf("enter real and imaginary part of complex number");
	    scanf("%d%d", &a[i].real, &a[i].img);
	}
	c= add(a,n);
	printf("Sum is= %d + i%d", c.real, c.img);
	return 0;
}
