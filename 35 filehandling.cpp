#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file1;
	//file1.open("affan.txt");
	file1.open("C:\\Users\\Tops\\Documents\\affan.txt",ios::out);	
	string data;	
	cout<<"Enter your name: ";
	cin>>data;
	file1<<data;
	
	file1.close();
	
	ifstream file2;
	
	file2.open("C:\\Users\\Tops\\Documents\\affan.txt",ios::in);
	
	file2>>data;
	cout<<data;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
