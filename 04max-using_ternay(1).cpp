#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,maxNum;
	
	cout<<"enter three numbers: ";
	
	cin>>num1>>num2>>num3;
	
	maxNum = (num1>num2) ?   (num1>num3)?num1:num3    :     (num2>num3)?num2:num3 ;
	
	
	cout<<"Maximum out of three numbers = "<<maxNum;
	return 0;
}
