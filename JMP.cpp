#include "JMP.h"

JMP::JMP(string a): x(a){}

void JMP::execute(int& i, DataMem& data)
{
		int index = stoi(x);//converting the string x into an int
		
		if(index >= 1024)
			throw out_of_range("Address is out of range");//validating the entered address

		if(index > i)//checking the if the index entered is less than i (the loop pointer)
			//if it is less than i, the jump shouldn't execute because if it did it will enter an infinite loop
			i = index-2;//jumping to the specified instruction by assigning the location that the user entered to the loop pointer
	
		cout<<"Jumping..."<<endl;
}

JMP::~JMP(){}