#ifndef ADD_H
#define ADD_H

#include "INSTR.h"


class ADD: public INSTR
{
private:
	string x;
	string y;
	string j;
public:
	ADD(string a, string b, string c);
	void execute(int& i, DataMem& data) override;
	~ADD(){}
};

#endif