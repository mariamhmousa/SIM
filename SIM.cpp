#include "SIM.h"

SIM::SIM(string* fileName, int x)
{
	cout<<"Constructing SIM..."<<endl;

	n = x;
	
	instr = new InstrMem*[n];//creating an array of pointers to n instruction memory banks

	for (int i = 0; i < n; ++i)
	{
		instr[i] = new InstrMem(fileName[i]);
	}

}

void SIM::execute()//method executes the instructions read from the file
{
		for (int i = 0; i < n; ++i)//array of threads to execute every program
		{	
			th.push_back(thread(&InstrMem::execute, instr[i],std::ref(data)));
		}
		for (int i = 0; i < n; ++i)
		{
			th[i].join();
		}
}

SIM::~SIM()
{
	cout<<"Destructing SIM..."<<endl;

	delete [] instr;
}
