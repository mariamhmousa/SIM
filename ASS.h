#ifndef ASS_H
#define ASS_H

#include "INSTR.h"

class ASS: public INSTR
{
private:
	string x, j;
public:
	ASS(string a, string b);
	void execute(int& i, DataMem& data) override;
	~ASS();
};

#endif