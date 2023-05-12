#include<iostream>
using namespace std;

template <typename T>

class Box
{
	public:		
		T height,width;		
		T getArea(T h,T w)
		{
			height=h;
			width=w;					
		}
		
		T display()
		{
			cout<<"Area : "<<height+width<<endl;
		}			
};
int main()
{
	Box <int>obj1;
	Box <float>obj2;
	Box <char>obj3;
	Box <string>obj4;
	
	obj1.getArea(2,3);
	obj1.display();
	obj2.getArea(4.5,2.5);
	obj2.display();
	obj3.getArea('t','z');
	obj3.display();
	obj4.getArea("Hello","N");
	obj4.display();
	return 0;
}
