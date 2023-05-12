#include<iostream>
using namespace std;

class A
{
	private:
		
		int a=12;
	public:	
		int getA()
		{
			cout<<a<<endl;
		}
		
		
	
};

class B : public A
{
	protected:
		
		int b=34;
{
	public:
	int getValue()
	{
		cout<<b<<endl;
	}
};



int main()
{
	C obj;
	
	obj.getValue();
	obj.getA();
	return 0;
}
