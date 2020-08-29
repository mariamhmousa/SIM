#include "InstrFactory.h"

INSTR* InstrFactory::create(string line)
{
		string var1, var2, var3, ins;
		
		stringstream ss(line);
		getline(ss, ins, ' ');

		//ADD
		if (ins == "ADD")//condition where the instruction is ADD
		{
			getline(ss, var1, ',');

			getline(ss, var2, ',');

			getline(ss, var3);

			return new ADD(var1, var2, var3);
		}
	
		else
			//NEG
			if(ins == "NEG")//condition where the instruction is NEG
			{
					// cout<<"Something"<<endl;

				getline(ss, var1, ',');

				getline(ss, var2);

				return new NEG(var1, var2);
			}

			else
				if(ins == "MUL")//condition where the instruction is MUL
				{
					getline(ss, var1, ',');

					getline(ss, var2, ',');

					getline(ss, var3);

					return new MUL(var1, var2, var3);
				}
				else
					if(ins == "JMP")//condition where the instruction is JMP
					{
						getline(ss, var1);
						
						return new JMP(var1);
					}
					else
						if(ins == "HALT")//condition where the instruction is HALT
						{
							return new HALT();
						}
						else
							if(ins == "ASS")//condition where the instruction is ASS
							{
								getline(ss, var1, ',');

								getline(ss, var2);

								return new ASS(var1, var2);
							}
							else
								if(ins == "READ")//condition where the instruction is READ
								{
									getline(ss, var1);

									return new READ(var1);
								}
								else
									if (ins == "JMP0")//condition where the instruction is JMP0
									{
										getline(ss, var1, ',');

										getline(ss, var2);

										return new JMP0(var1, var2);
									}
									else
										if(ins == "WRITE")//condition where the instruction is WRITE
										{
											getline(ss, var1);

											return new WRITE(var1);
										}
										else
											if(ins == "LE")//condition where the instruction is WRITE
											{
												getline(ss, var1, ',');

												getline(ss, var2, ',');

												getline(ss, var3);

												return new LE(var1, var2, var3);								
											}

}