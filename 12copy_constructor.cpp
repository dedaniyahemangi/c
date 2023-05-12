#include<iostream>
using namespace std;

class Test
{
	public:
		
		int number;		
		
		Test(int value)
		{
			number = value;
			cout<<number<<endl;//12
		}	
		
		Test(Test &xyz)
		{
			cout<<xyz.number<<endl;
			
		}
		
	
};
int main()
{
	Test T(12);//
	
	Test T1(T);
	
	return 0;
}
