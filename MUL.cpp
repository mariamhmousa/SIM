#include "MUL.h"

MUL::MUL(string a, string b, string c): x(a), y(b), j(c){}

void MUL::execute(int& i, DataMem& data)
{
	if(!isdigit(x[0]))//checking if x is a variable
	{
		if(isdigit(j[0]))
			throw invalid_argument("Third parameter has to be an address");//validating the syntax of the address

		mtx.lock();

		data.getRefData(j) = data.getValData(x) * data.getValData(y);//storing the product of the two variables
		
		cout<<data.getValData(j)<<endl;
	
		mtx.unlock();
	}
	else//if x is a constant
	{
		int var1 = stoi(x);

		int var2 = stoi(y);

		if(isdigit(j[0]))
			throw invalid_argument("Third parameter has to be an address");//validating the syntax of the address

		mtx.lock();

		data.getRefData(j) =  var1 * var2;//storing the product of the two values
		
		cout<<data.getValData(j)<<endl;
	
		mtx.unlock();
	}
}

MUL::~MUL(){}