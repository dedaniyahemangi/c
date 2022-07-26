#include<stdio.h>
int main()
{
	float p,r,t;
	printf("Enter principle amt: ");
	scanf("%f",&p);
	printf("Enter annual int rate: ");
	scanf("%f",&r);
	printf("Enter loan period: ");
	scanf("%f",&t);
	float A = (p*r*t)/100;
	printf("final amt = %.f rs",A);
	return 0;
}
