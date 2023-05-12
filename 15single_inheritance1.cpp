#include<iostream>
using namespace std;

class A
{
	public:		
		int a=12;
		
		void fun()
		{
			cout<<" class A "<<endl;
		}	
};

class B:public A
{
	public:
	void funB()
	{
		cout<<"This is B"<<endl;
	}
};
int main()
{
	B obj;
	cout<<obj.a;
	obj.fun();
	obj.funB();
	return 0;
}
