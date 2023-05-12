/*
Constructor:
=> it is a magic function
 which is called automatically when an object of a class id created.
 
 Types:
 
 1. Simple/Default Constructor
 
 Syntax:
 
 		 constructor-name() 
 		{
 			..code;
 			
 		}
 		
 		Note:
 		1. it doesn't have a return-type/datatype
 		2. its name must be same as the class name
 		
 2. Parameterized Constructor
 
 	 constructor-name(arg1,arg2,..,argN) 
 		{
 			..code;
 			
 		}
 3. Copy Constructor

*/


#include<iostream>
using namespace std;

class Constructor
{
	public:
		
		Constructor()
		{
			int a=34;
			
			cout<<a;
			cout<<"This is default constructor..";
		}
};

int main()
{
	Constructor obj;
	return 0;
}
