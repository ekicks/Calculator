#pragma once
#include <string>
#include <list>
#include "IBaseCommands.h"
#include <sstream>

class CalculatorProcessor
{
public:
	static CalculatorProcessor& getInstance(){
		static CalculatorProcessor instance;
		return instance;
	}
private:
	CalculatorProcessor() {}
	std::list<IBaseCommands*> commands;
	IBaseCommands* lastAdded = nullptr;
public:
	int left;
	int right;

	std::string textString;
	std::string SplitLeft(const std::string& getSplit, char symbol);
	std::string SplitRight(const std::string& getSplit, char symbol);

	void AddCommand(IBaseCommands* commands, int num);
	float CommandExecution();

	float AddFunction(const std::string& string);
	float SubtractFunction(const std::string& string);
	float DivideFunction(const std::string& string);
	float MultiplyFunction(const std::string& string);
	int ModFunction(const std::string& string);
	std::string BinaryFunction(long long bin);
	std::string HexFunction(int number);
};

