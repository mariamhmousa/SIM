#ifndef INSTRFACTORY_H
#define INSTRFACTORY_H

#include "INSTR.h"
#include "ADD.h"
#include "NEG.h"
#include "MUL.h"
#include "JMP.h"
#include "JMP0.h"
#include "WRITE.h"
#include "HALT.h"
#include "ASS.h"
#include "READ.h"
#include "LE.h"
#include <string>
#include <sstream>

class InstrFactory
{
public:
	InstrFactory(){}
	INSTR* create(string ins);
	~InstrFactory(){}
	
};

#endif