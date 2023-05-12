#include<iostream>
using namespace std;

class Bank
{
	protected:
		int atmPin=1234;
		float balance = 345342.56;
	public:
		string bank_name = "HDFC";
		string IFSC = "HDFC000N";
		int acc_number = 23342423;
	
};

class User1 : public Bank
{
	public:
	int	getUserDetails()
		{
			cout<<"User1 Atmpin : "<<atmPin<<endl;
			cout<<"User1 Balance : "<<balance<<endl;
		}
};

int main()
{
	User1 B;
	B.getUserDetails();	

	//cout<<"User1 Atmpin : "<<B.atmPin<<endl;
	//cout<<"User1 Balance : "<<B.balance<<endl;
	cout<<"Bank name: "<<B.bank_name<<endl;
	cout<<"Bank IFSC: "<<B.IFSC<<endl;
	cout<<"Bank Account Number: "<<B.acc_number<<endl;
	
	return 0;
}
