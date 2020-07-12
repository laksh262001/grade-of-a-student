#include<stdio.h>
main()
{
	int marks;
	printf("Enter your marks\n");
	scanf("%d",&marks);
	if((85<=marks)&&(marks<=100))
		printf("Grade-A\n");
	else if((70<=marks)&&(marks<=84))
		printf("Grade-B\n");
	else if((55<=marks)&&(marks<=69))
		printf("Grade-C\n");
	else if((40<=marks)&&(marks<=54))
		printf("Grade-D\n");
	else
	printf("Grade:F");
}
