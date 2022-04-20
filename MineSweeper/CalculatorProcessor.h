#pragma once
#include <string>
class CalculatorProcessor
{
public:
	static CalculatorProcessor& getInstance(){
		static CalculatorProcessor instance;
		return instance;
	}
private:
	CalculatorProcessor() {}

public:
	int left;
	int right ;

	std::string textString;
	std::string SplitLeft(const std::string& getSplit, char symbol);
	std::string SplitRight(const std::string& getSplit, char symbol);

	int AddFunction(const std::string& string);
	int SubtractFunction(const std::string& string);
	int DivideFunction(const std::string& string);
	int MultiplyFunction(const std::string& string);
	int ModFunction(const std::string& string);
};

