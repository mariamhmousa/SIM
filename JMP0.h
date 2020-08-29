#ifndef JMP0_H
#define JMP0_H

#include "JMP.h"

class JMP0: public JMP
{
private:
	string y;
public:
	JMP0(string a, string b);
	void execute(int& i, DataMem& data) override;
	~JMP0();
	
};

#endif