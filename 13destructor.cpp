#include<iostream>
using namespace std;

class A
{
	public:
		int a;		
		~A()
		{
			cout<<"Enter value of a : ";
			cin>>a;
			cout<<"a = "<<a<<endl;
		}	
};

int main()
{
	A obj;
	return 0;
}
