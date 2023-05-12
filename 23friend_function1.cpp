#include<iostream>
using namespace std;
class Divya;
class Aditya
{
	private:		
		int money1=250;
		
	public:
	
	friend void Nirav(Aditya r1,Divya r2);
	
};

class Divya
{
	private:		
		int money2=250;
		
		public:
			
		friend void Nirav(Aditya r1,Divya r2);
};

void Nirav(Aditya r1,Divya r2)
		{
			cout<<r1.money1+r2.money2<<endl;
		}

int main()
{
	Aditya A;
	Divya D;
	
	Nirav(A,D);
	return 0;
}
