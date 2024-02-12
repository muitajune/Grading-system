#include<stdio.h>
int main()

{
	int marks;
	printf("Enter your marks here:\n");
	scanf("%d", marks);
	if (marks<35)
	{
		printf("FAILED");
		printf("repeat test");
	}
	else (marks >=35 && marks<=44);
	{
		printf(" D");
		printf("Not good");
	}
	if (marks>=45 && marks <=59)
	{
		printf(" C");
		printf("average");
	}
	else  (marks>=60 && marks<=74);
		{
			printf("B");
			printf("Above average");
		}
		if (marks>=75 && marks <=79)
		{
			printf("A");
			printf("Impressive");
		}
		else (marks>=80);
		{
			printf("A+");
			printf("Excellent");
		}
		return 0;
	
}