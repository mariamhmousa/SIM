#ifndef WRITE_H
#define WRITE_H

#include "INSTR.h"

class WRITE: public INSTR
{
private:
	string x;
public:
	WRITE(string a);
	void execute(int& i, DataMem& data);
	~WRITE();
	
};

#endif