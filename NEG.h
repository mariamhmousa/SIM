#ifndef NEG_H
#define NEG_H

#include "INSTR.h"


class NEG: public INSTR
{
private:
	string x, j;
public:
	NEG(string in1, string out);
	
	void execute(int& i, DataMem& data);

	~NEG(){}
};


#endif