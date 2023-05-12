#include<iostream>
using namespace std;

class op_overload 
{
	public:
		
		int value;
		
		void getValue(int v) 
		{
			value=v; 
		}			
		
		op_overload operator +(op_overload obj)
		{		
			op_overload xyz;		
			xyz.value = value+obj.value; 
			
		}	
		
		void display()
		{
			cout<<value<<endl;//11
		}
	
};


int main()
{
	op_overload obj1,obj2,obj3,obj4,obj5,obj6,totalSum;	
	obj1.getValue(10);	
	obj2.getValue(20);
	
	obj4.getValue(40);
	obj5.getValue(30);

	
	
	obj3 = obj1+obj2; //30
	obj6 = obj4+obj5; //70
	
	totalSum = obj3+obj6; //100
	
		
	obj3.display();
	obj6.display();
	totalSum.display();
	
	
	return 0;
}
