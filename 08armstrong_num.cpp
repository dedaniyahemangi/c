#include<iostream>
using namespace std;

class ArmStrongNum
{
	public:
		
		int number,rem,result=0,n1;
		
		int chkNum()
		{
			
			cout<<"Enter any number : ";
			cin>>number;//153
			
			n1=number;//153;
			
			while(n1>0)
			{
				rem=n1%10; //  5
				
				result = result+rem*rem*rem; //27 + 5*5*5
				
				n1= n1/10;// 1/10 =>0
			}			
					
			
				if(number==result)
				{
					cout<<"Armstrong number...!";
				}
				else
				{
					cout<<"not an Armstrong number...!";
				}			
		}
	
};

int main()
{
	
	ArmStrongNum ob;
	ob.chkNum();
	
	return 0;
}
