#include "AsmI.h"
#include "ByteCompiler.h"
#include <iostream>
#include <string>

int main()
{
	AsmI asmi;
	asmi.printHelp();
	asmi.printRegisters();
	while (1)
	{
		std::string line;
		std::getline(std::cin, line);
		if(line == "run"){
			break;
		}
		asmi.handleInput(line);
		asmi.command();
	}
	asmi.printRegisters();
}
