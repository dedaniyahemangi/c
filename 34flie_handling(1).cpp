/*


<fstream> : header file

ofstream = > to write into a file
ifstrem => to read from a file

ios::out => write mode
ios::in => read mode
ios::app => append mode



*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	ofstream file1;
	string data;
//	file1.open("C:\\Users\\Tops\\Pictures\\divya.txt");
	file1.open("C:\\Users\\Tops\\Pictures\\divya.txt",ios::app);
	
	cout<<"enter data:";
	cin>>data;
	file1<<data;
	
	return 0;
}



