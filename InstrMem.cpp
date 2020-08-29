#include "InstrMem.h"

InstrMem::InstrMem(){}

InstrMem::InstrMem(string fileName)
{
	cout<<"Constructing InstrMem..."<<endl;
	//loading the instructions from the file to the instruction memory

	InstrFactory factory;//creating the Instructions Factory
	ifstream code;//creating filestream
	string line, ins;
	code.open(fileName);//opening file that has the instructions
	if(code.is_open())
	{
		while(getline(code, line))//reading the instructions into the SIM instruction memory
		{
			if(size >= 1024)//if the instructions number reached higher than 1024, the progrom throws an exception
				throw length_error("File size is larger than SIM memory");
			
			instr[size] = factory.create(line);//creates a new instruction by the factory

			size++;
		}
	code.close();//closing the file
	}
	else//if the file is not opened
	{
		cout<<endl<<"Error opening the file"<<endl<<endl;
	}


}

void InstrMem::execute(DataMem& data)
{

	for(int i = 0; i < size; i++)
	{
		instr[i]->execute(i, data);//passes the loop pointer because some instructions need to jump to a specific location in the instruction memory
		
		if(i+2 > size && i+2 != 1026)
			throw out_of_range("This instruction does not exist");
	}

}

InstrMem::~InstrMem()
{
	cout<<"Destructing InstrMem..."<<endl;
}