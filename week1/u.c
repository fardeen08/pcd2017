#include <stdio.h>

int add (int a,int b,int c)
{
    int d;
    d=a+b+c;
    return d;
}
int main()
{
    int e;
    e= add(5,9,13);
    printf("%d\n",e);
    return 0;
}
