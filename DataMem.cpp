#include "DataMem.h"

DataMem::DataMem()
{
	cout<<"Constructing DataMem..."<<endl;
}

int DataMem::getSize()
{
	return size;
}

void DataMem::incrementSize()//increments the size by one
{
	size++;
}

int DataMem::getValData(string c)//returns the value in the index passed in the method
{
	if(data_map.count(c) == 0)//if the location doesn't exist, create it first
	{
		addElement(c);
	}
	
	int i = data_map[c];
	return data[i];
}

int& DataMem::getRefData(string c)//returns a reference to the data in the index passed in the method
{
	if(data_map.count(c) == 0)//if the location doesn't exist, create it first
	{
		addElement(c);
	}

	int i = data_map[c];
	return data[i];
}

void DataMem::addElement(string c)
{
	if(size >= 1024)//throwing an exception if the memory ran out
		throw length_error("Data Memory ran out");
	
	data_map[c] = size;
	size++;
}

void DataMem::print()//prints out the data in the Data Memory
{
	cout<<"Data in the memory:"<<endl;
	for(int i = 0; i < 1024; i++)
		{
			if(i%5 == 0)
				cout<<endl;//printing a line every 5 elements
	
			cout<<i<<":"<<data[i]<<"  ";
		}
		cout<<endl;
}

DataMem::~DataMem()
{
	cout<<"Destructing DataMem..."<<endl;
}