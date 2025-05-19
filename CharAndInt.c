#include<stdio.h>
int main()
{
	double num;
	char letter;
	
	printf("Enter the double number : ");
	scanf("%f",&num);
	printf("\n Your double number is : %lf",num);
	
	printf("Enter your char letter: ");
	scanf("\n%c",&letter);
	printf("\n Your letter is :%c",letter);
	return 0;
}