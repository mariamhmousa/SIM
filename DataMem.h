#ifndef DATAMEM_H
#define DATAMEM_H

#include <iostream>
#include <map>

using namespace std;

class DataMem
{
private:
	int data[1024] = {};
	map <string, int> data_map;
	int size = 0;
public:
	DataMem();
	int getSize();
	void incrementSize();
	void addElement(string c);
	int getValData(string c);
	int& getRefData(string c);
	void print();//prints data in the data memory
	~DataMem();
};

#endif