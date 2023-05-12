#include<iostream>
using namespace std;

class Bank
{
	private:		
	int AtmPin=1234,Balance;	
	
	
	public:
	char bankname[20];	
	int test()
	{
		cout<<AtmPin;
	}	
};

int main()
{
	Bank obj;
//	cin>>AtmPin;
//	cin>>obj.bankname;
//	cout<<obj.bankname;


	obj.test();
	return 0;
}
