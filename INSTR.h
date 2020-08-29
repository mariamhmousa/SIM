#ifndef INSTR_H
#define INSTR_H

#include "DataMem.h"
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <mutex>

using namespace std;

class INSTR
{
protected:
	mutex mtx;
public:
	INSTR();
	virtual void execute(int& i, DataMem& data) = 0;
	~INSTR();
};


#endif