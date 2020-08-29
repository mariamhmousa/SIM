#ifndef LE_H
#define LE_H

#include "INSTR.h"

class LE: public INSTR
{
private:
	string x;
	string y;
	string j;
public:
	LE(string a, string b, string c);
	void execute(int& i, DataMem& data);
	~LE();
	
};

#endif