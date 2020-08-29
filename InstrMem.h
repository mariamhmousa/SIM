#ifndef INSTRMEM_H
#define INSTRMEM_H

#include "InstrFactory.h"
#include "INSTR.h"
#include <string>
#include <sstream>
#include <fstream>
#include <exception>
#include <iostream>

using namespace std;

class InstrMem
{
private:
	INSTR* instr[1024];
	int size = 0;//actual number of the instructions in the file
public:
	InstrMem();
	InstrMem(string fileName);
	void execute(DataMem& data);
	~InstrMem();
};

#endif