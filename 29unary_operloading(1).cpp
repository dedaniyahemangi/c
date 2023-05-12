#include<iostream>
using namespace std;

class Op_Overloading
{
	public:
		
		int value;
		
		int getValue(int v)
		{
			value =v;
		}
		
		void operator ++()
		{
			++value;
		}
		
		void display()
		{
			cout<<value<<endl;
		}
};

int main()
{
	Op_Overloading obj;
	obj.getValue(23);
	++obj;
	obj.display();
	return 0;
}
