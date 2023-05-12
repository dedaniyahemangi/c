#include<iostream>
using namespace std;
class Test
{
	public:		
//		int a;
//		char str[34];//string str;		
		Test(int a,string s)
		{
			cout<<a<<" "<<s;
		}	
};

int main()
{
	
	Test obj(12,"Name");
	return 0;
}
