#include<iostream>
using namespace std;

class A
{
	public:
		
		int a;
		
		int getA()
		{
			cout<<"Enter value of a : ";
			cin>>a;
			cout<<"a = "<<a<<endl<<"This is class A...."<<endl;
			
		}
};

class B : public A
{
	public:
		
		int test()		
		{
			//cout<<a<<endl;
			cout<<"this is class B..";
		}
	
};

int main()
{
	B ob;
	
	ob.getA();
	ob.test();
	
	return 0;
}
