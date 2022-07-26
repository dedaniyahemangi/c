#include<stdio.h>
int main()
{
  
	float a,r,c,b,h;
	printf("input value of circle :\n");
	scanf("%f",&r);
	a=3.141592653589793238*r*r;
	printf(" area of circle = %f\n",a);
	
	printf("input base of triangle: \n");
	scanf("%f",&b);
	printf("input height of triangle: \n");
	scanf("%f",&h);
	
	c=(h*b)/2;
	printf("area of triangle= %.2f\n",c);
	
	printf("enter the height of rectangle: \n");
	scanf("%f",&a);
	printf("enter the base of rectangle: \n");
	scanf("%f",&b);	
	c=(a*b);
	printf("area of rectrangle= %.2f\n",c);
}
	


