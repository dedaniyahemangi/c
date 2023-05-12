#include<stdio.h>
int test(int xyz[])
 {
 	int x;
 	for(x=0;x<3;x++)
 	{
 		printf("%d",xyz[x]);
	 }
 }
 int main()
 {
 	int arr[]={1,2,3}
 	test(arr);
 	return 0;
 }
