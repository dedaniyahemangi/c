#include<iostream>
using namespace std;

int testPattern()
{
		int row,col;
	
	for(row=10;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			if(row%2!=0)
			{
				cout<<"A"<<" ";
			}
			else
			
			{
				cout<<"B"<<" ";
			}
		}
		
		cout<<"\n";
	}
}

int main()
{
	
	testPattern();
	
	return 0;
}
