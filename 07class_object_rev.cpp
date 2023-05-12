#include<iostream>
using namespace std;

class Person
{
	public:
	int a,b;
	
	int getB(int value)
	{
		b= value;
		cout<<b<<endl;
	}	
};

int main()
{
	Person P;
	cin>>P.Person::a; // scope resolution operator
	cout<<P.Person::a<<endl;
	
	P.Person::getB(34);
	return 0;
}
