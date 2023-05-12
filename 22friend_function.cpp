/*
Friend Class and Friend Function:

Used to access private and protected members of a class.

Friend Function:

Syntax:
 
 	friend datatype function-name();
 

*/
#include<iostream>
using namespace std;
class Herit
{
	private:
		
		string tv = "Watching ";
	public:
	
		friend void Nirav(Herit r1);	
};

	void Nirav(Herit r1)
		{
			cout<<r1.tv<<"IPL 2022...!"<<endl;
		}

int main()
{
	Herit H;
	Nirav(H);
	return 0;
}

















