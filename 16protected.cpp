#include<iostream>
using namespace std;

class chkPrivate
{
	protected:
	int a=12;	
};

class B:public chkPrivate
{
	public:
		int getA()
		{
			cout<<a<<endl;
		}
	
};
int main()
{
	chkPrivate obj;
	cout<<obj.a;
	return 0;
}
