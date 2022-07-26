#include<stdio.h>
int main()
{
	float y,d;
	printf("enter value of year: ");
	scanf("%f",&y);
	printf("days %f\n",(y*365));
	
	printf("enter value of days: ");
	scanf("%f",&d);	
	printf("days %f",(d/365));
}
