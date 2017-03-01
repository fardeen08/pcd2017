#include <stdio.h>
struct complex 
{
float real;
float imaginary;
};
struct complex add( struct complex a , struct complex b)
{
struct complex c;
c.real = a.real + b.real;
c.imaginary = a.imaginary + b.imaginary;
return c;
};
int main()
{
struct complex a,b,sum;
printf("enter 2 complex numbers to add\n");
scanf("%f%f%f%f", &a.real,&a.imaginary,&b.real,&b.imaginary);
sum = add(a,b);
printf ("the sum is %f + i%f\n",sum.real,sum.imaginary);
return 0;
};
