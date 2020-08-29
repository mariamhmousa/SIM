#include "WRITE.h"

WRITE::WRITE(string a): x(a){}

void WRITE::execute(int& i, DataMem& data)
{
	
	if(!isdigit(x[0]))
	{
		mtx.lock();
		cout<<data.getValData(x)<<endl;//printing out the value in the specified location
		mtx.unlock();
	}
	else
		cout<<x<<endl;//printing out the value entered

}

WRITE::~WRITE(){}