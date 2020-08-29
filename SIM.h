#ifndef SIM_H
#define SIM_H

#include "InstrMem.h"
#include <thread>
#include <vector>
#include <iostream>


using namespace std;

class SIM
{
private:
	int n;//number of files to be processed
	InstrMem** instr;
	DataMem data;
	vector <thread> th;
public:
	SIM(string* filename, int x);

	void execute();//executes the code in the loaded file and returns 0 when it finishes	

	~SIM();
};

#endif