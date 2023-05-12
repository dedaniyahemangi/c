#include<iostream>
using namespace std;

class Hemangi
{
	private:
		int money=234;
		
	public:
		friend class Dipali;	
};

class Dipali
{
	public:
		
		void getMoney(Hemangi H)
		{
			cout<<H.money<<endl;
		}	
};

int main()
{
	Hemangi obj;
	Dipali ob1;
	ob1.getMoney(obj);
	
}
