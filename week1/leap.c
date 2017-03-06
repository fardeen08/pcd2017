#include <stdio.h>
#include <math.h>
	int main()
	{
		int n;
		printf("enter the year\n");
		scanf("%d",&n);
			if (n%4==0)
			{
				if (n%100==0)
				{
						if (n%400==0)
						{
							printf("the given year is leap year\n");
						}									
					else
						{	
							printf("the given year is not a leap year\n");
						}					
				}
				else
				{
					printf("the given year is a leap year\n");
					}
				}
				else 
				{
					printf("the given year is not a leap year\n");
				}
				
		return 0;
		}	
