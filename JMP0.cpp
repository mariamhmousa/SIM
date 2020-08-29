#include "JMP0.h"

JMP0::JMP0(string a, string b):JMP(b), y(a){}

void JMP0::execute(int& i, DataMem& data)
{
	int var1;
	
	if(!isdigit(y[0]))//checking if y is an address
		{
			var1 = data.getValData(y);//returning the specified variable and storing its value in var1
		}
		else
			var1 = stoi(y);//converting the string y into an int

	if(var1 == 0)//executes the jump only if the value is zero
	{
		JMP::execute(i, data);//calling the execute function of the JMP class
	}
}

JMP0::~JMP0(){}