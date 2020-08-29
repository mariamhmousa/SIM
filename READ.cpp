#include "READ.h"

READ::READ(string a): x(a){}

void READ::execute(int& i, DataMem& data)
{
	if(isdigit(x[0]))
		throw invalid_argument("Parameter has to be an address");//validating the syntax of the address
	
	mtx.lock();
	
	cin>>data.getRefData(x);//taking the input and storing it in the specified location

	cout<<"value read in "<<x<<" is "<<data.getValData(x)<<endl;

	mtx.unlock();
}

READ::~READ(){}