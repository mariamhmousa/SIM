#include "HALT.h"

HALT::HALT(){}

void HALT::execute(int& i, DataMem& data)
{
	cout<<"Stopping Program..."<<endl;
	i = 1024;//getting the pointer out of the loop so that the processor stops
}

HALT::~HALT(){}