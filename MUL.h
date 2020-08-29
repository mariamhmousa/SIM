#ifndef MUL_H
#define MUL_H

#include "INSTR.h"

class MUL: public INSTR
{
private:
	string x, y, j;
public:
	MUL(string a, string b, string c);
	void execute(int& i, DataMem& data) override;
	~MUL();
};

#endif