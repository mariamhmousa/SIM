#ifndef READ_H
#define READ_H

#include "INSTR.h"

class READ: public INSTR
{
private:
	string x;
public:
	READ(string a);
	void execute(int& i, DataMem& data);
	~READ();
};

#endif