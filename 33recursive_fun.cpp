//5+4+3+2+1
#include<iostream>
using namespace std;

int getN(int x)
{
	if(x>0)
	{ 
		
		return x*getN(x-1);	
	}

}


int main()
{
	cout<<getN(5);
	return 0;
	
}
