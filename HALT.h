#ifndef HALT_H
#define HALT_H

#include "INSTR.h"


class HALT: public INSTR
{
public:
	HALT();
	void execute(int&i, DataMem& data) override;
	~HALT();
};

#endif