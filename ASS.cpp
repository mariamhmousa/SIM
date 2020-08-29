#include "ASS.h"

ASS::ASS(string a, string b): x(a), j(b){}

void ASS::execute(int& i, DataMem& data)
{
	if(!isdigit(x[0]))//checking if x is a variable
	{
		if(isdigit(j[0]))
			throw invalid_argument("Second parameter has to be an address");//validating the syntax of the address

		mtx.lock();

		data.getRefData(j) = data.getValData(x);//assigning the values in the specified location to each other

		cout<<data.getValData(j)<<endl;
	
		mtx.unlock();
	}
	else//if x is a constant
	{
		int var1 = stoi(x);//erasing the first character of x which is '&'

		if(isdigit(j[0]))
			throw invalid_argument("Second parameter has to be an address");//validating the syntax of the address

		mtx.lock();

		data.getRefData(j) = var1;//assiging var1 to the data in the location var2

		cout<<data.getValData(j)<<endl;

		mtx.unlock();
	}
}

ASS::~ASS(){}