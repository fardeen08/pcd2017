#include <stdio.h>
int add (int a , int b)
{
    int c;
    c = a+b;
    return c;
}
int main()
{
    int a,b,sum;
    printf("enter 2 numbers to add\n");
    scanf("%d%d", &a,&b);
    sum = add(a,b);
    printf("the sum is %d\n",sum);
    return 0;
}
