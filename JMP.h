#ifndef JMP_H
#define JMP_H

#include "INSTR.h"

class JMP: public INSTR
{
private:
	string x;
public:
	JMP(string a);
	void execute(int& i, DataMem& data) override;//takes a reference to the loop pointer and assigns to it the location that the user entered
	~JMP();
};


#endif