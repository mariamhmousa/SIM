#include "SIM.h"
#include <iostream>

using namespace std;

int main()
{
	int n;//number of threads/instruction memory banks
	
	cout<<"SIM started. Enter number of programs:";
	
	cin>>n;
	
	string* fileName = new string[n];

	cout<<"Enter files names:";

	for(int i = 0; i < n; i++)
	{
		cin>>fileName[i];
	}

	SIM sim(fileName, n);

	try
	{
		sim.execute();
	}
	catch(exception& e)//catching exceptions thrown by the instructions
	{
		cout<<endl<<e.what()<<endl<<endl;
	}

	delete [] fileName;
}