#include "NEG.h"

NEG::NEG(string in1, string out): x(in1), j(out){}

void NEG::execute(int& i, DataMem& data)
{
	if(!isdigit(x[0]))//checking if x is a variable
	{
		if(isdigit(j[0]))
			throw invalid_argument("Second parameter has to be an address");//validating the syntax of the address

		mtx.lock();

		data.getRefData(j) = -1*data.getValData(x);//storing the negative value in the specified location

		cout<<data.getValData(j)<<endl;

		mtx.unlock();

	}
	else//if x is a constant
	{
		int var1 = stoi(x);//converting the string x into an int

		if(isdigit(j[0]))
			throw invalid_argument("Second parameter has to be an address");//validating the syntax of the address

		mtx.lock();

		data.getRefData(j) =  -1*var1;//storing the negative value in the specified location

		cout<<data.getValData(j)<<endl;
		
		mtx.unlock();

	}
}