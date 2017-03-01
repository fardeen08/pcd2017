#include <stdio.h>
int add (int n,int a[])
{
    int i;
    int sum=0;
    for ( i=0;i<n;i=i+1)
    {
        sum= sum + a[i];
    }
    return sum;
}
int main()
{
    int a[10],n,i,sum;
    printf("enter the number of values you want to add\n");
    scanf("%d",&n);
    for ( i=0;i<n;i=i+1)
    {
        printf("enter the values\n");
        scanf("%d",&a[i]);
    }
    sum=add(n,a);
    printf("the sum is %d\n",sum);
   return 0;
    ;
}
