#include<iostream>
using namespace std;

int main()
{
	
	char choice,ch;

do
{
	cout<<"Enter your choice: "<<endl;
	cin>>choice;
	
	switch(choice)
	{
				case '+': cout<<"+";
				break;
				
				case '-': cout<<"-";
				break;
				
				case '*': cout<<"*";
				break;
				
				case '/': cout<<"/";
				break;
				
				
		
	}
	cout<<"Do you want to continue(Y/N) : ";
	cin>>ch;
	
}while(ch=='Y');
	
	
	
	return 0;
}
