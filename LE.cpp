#include "LE.h"

LE::LE(string a, string b, string c): x(a), y(b), j(c){}

void LE::execute(int& i, DataMem& data)
{
	if(!isdigit(x[0]))//checking if x is a variable
	{
		if(isdigit(j[0]))
			throw invalid_argument("Third parameter has to be an address");//checking the syntax of the address

		mtx.lock();

		if(data.getValData(x) <= data.getValData(y))//checking if the first parameter is less than the second

			data.getRefData(j) = 1;//storing 1 in the location entered if true

		else

			data.getRefData(j) = 0;//storing 0 in the location entered if false
		
		cout<<data.getValData(j)<<endl;
		
		mtx.unlock();
	}
	else//if x is a constant
	{
		int var1 = stoi(x);//converting the string x into an int

		int var2 = stoi(y);//converting the string y into an int

		if(isdigit(j[0]))
			throw invalid_argument("Third parameter has to be an address");//checking the syntax of the address
	
		mtx.lock();

		if(var1 <= var2)
			data.getRefData(j) = 1;//storing 1 in the location entered if true
		else
			data.getRefData(j) = 0;//storing 0 in the location entered if false

		cout<<data.getValData(j)<<endl;

		mtx.unlock();
	}
}

LE::~LE(){} 