#include "ADD.h"

ADD::ADD(string a, string b, string c): x(a), y(b), j(c){}

void ADD::execute(int& i, DataMem& data)
{
	
	if(!isdigit(x[0]))//checking if x is a variable
	{
		if(isdigit(j[0]))
			throw invalid_argument("Third parameter must be an address");//checking the syntax of the address

		mtx.lock();

		data.getRefData(j) = data.getValData(y) + data.getValData(x);//adding the data in the addresses var1 and var2 and storing the result in var3
	
		cout<<data.getValData(j)<<endl;
	
		mtx.unlock();
	}
	else//if x is a constant
	{
		int var1 = stoi(x);//converting the string x into an int

		int var2 = stoi(y);//converting the string y into an int

		if(isdigit(j[0]))
			throw invalid_argument("Third parameter must be an address");//checking the syntax of the address

		mtx.lock();

		data.getRefData(j) =  var1 + var2;// adding the entered values and storing the result in the address entered
	
		cout<<data.getValData(j)<<endl;

		mtx.unlock();
	}
}