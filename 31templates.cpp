//C++ Templates:
//	used to make generic programs
//	
//	typename/class keyword is used to create templates
//	
//	Types:
//		1. function template
//		
//		Syntax:
//			
//			typename anyname;
//			template <typename xyz>
//			
//			
//			
//		2. class template
//		
		
		


#include<iostream>
using namespace std;

template <typename xyz>

 xyz getValue(xyz x)
 {
 	cout<<x<<endl;
 	
 }
int main()
{
	getValue(23);
	getValue(2.3);
	getValue('j');
	getValue("name");
	return 0;
}








