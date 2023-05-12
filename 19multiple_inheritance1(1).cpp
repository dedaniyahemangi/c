#include<iostream>
using namespace std;

class Father
{
	protected:
		
		int a=12;
		string getThappad = "get it..!";
};

class Mother
{
	protected: 
	
		int b = 23;
		string GetFood = "khadu baka..??";
		
	
};

class Son : public Father,public Mother
{
	public:
		
		int getValues()
		{
			cout<<a<<endl<<b<<endl<<getThappad<<endl<<GetFood;
		}

};

class Daughter:public Father,public Mother
{
	public:
		
		int getValues123()
		{
			cout<<a<<endl<<b<<endl<<getThappad<<endl<<GetFood;
		}
	
};


int main()
{
	
	Son S;
	S.getValues();
	
	Daughter D;
	D.getValues123();
	return 0;
	
}
