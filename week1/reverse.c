#include <stdio.h>
#include <math.h>
	int rev(int n)
	{
		int a=0;
		while (n|=0)
		{
			int x=n%10;
			a=a*10 + x;
			n/=10;
			}
		return a;
	}
int main()
{
	int d,n;
	printf("enter the number to be reversed\n");
	scanf("%d",&n);
	d = rev(n);
	printf("the reverse of given number is %d\n",d);
		
		if (n==d)
		{
			printf("the given number is palindrome\n");
		}
		else
		{
			printf("the given number is not a palindrome\n");
		}
	return 0;
}			
