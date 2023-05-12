#include<iostream>
using namespace std;

class A
{
	public:
		int a=34;
	
};

class B : virtual public A
{
		public:
		int b=4;
	
};
class C :public virtual A
{
		public:
		int c=3;
	
};

class D : public B,public C
{
		public:	
	
};

int main()
{
	D obj;
	cout<<obj.a;

	return 0;
}
