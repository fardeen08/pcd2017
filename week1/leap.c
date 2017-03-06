#include <stdio.h>
#include <math.h>
	int main()
	{
		int n;
		printf("enter the year\n");
		scanf("%d",&n);
			if (n%4==0)
			{
				printf("the given year is leap year\n");
			}
			else
			{
				printf("the given year is not a leap year\n");
			}	
		return 0;
		}	
