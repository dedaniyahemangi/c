#include<iostream>
using namespace std;

class Aditya
{
	private:
	
	int money1 = 500;
	
	public:
	friend class Divya;
	
};

class Vishal
{
	private:
	
	int money2 = 500;
	public:
		friend class Divya;
	
};

class Divya
{
	public:
		
		void getMoney(Aditya A,Vishal V)
		{
			cout<<A.money1+V.money2<<endl;
		}
	
};

int main()
{
	Aditya obj1;
	Vishal obj2;
	Divya D;
	D.getMoney(obj1,obj2);
	
	return 0;
}
