#include "CalculatorProcessor.h"

 std::string CalculatorProcessor::SplitLeft(const std::string& getSplit, char symbol)
{ 
	std::string gs = getSplit.substr(0, getSplit.find(symbol));
	return gs;
}

 std::string CalculatorProcessor::SplitRight(const std::string& getSplit, char symbol)
{
	std::string gs = getSplit.substr(getSplit.find(symbol) + 1, getSplit.length());
	return gs;
}

int CalculatorProcessor::AddFunction(const std::string& string)
{
	char addSymbol = '+';
	left = std::atoi(SplitLeft(string, addSymbol).c_str());
	right = std::atoi(SplitRight(string, addSymbol).c_str());
	return left + right;
}

int CalculatorProcessor::SubtractFunction(const std::string& string)
{
	char minusSymbol = '-';
	left = std::atoi(SplitLeft(string, minusSymbol).c_str());
	right = std::atoi(SplitRight(string, minusSymbol).c_str());
	return left - right;
}

int CalculatorProcessor::DivideFunction(const std::string& string)
{
	char divideSymbol = '÷';
	left = std::atoi(SplitLeft(string, divideSymbol).c_str());
	right = std::atoi(SplitRight(string, divideSymbol).c_str());
	return left / right;
}

int CalculatorProcessor::MultiplyFunction(const std::string& string)
{
	char multiplySymbol = '*';
	left = std::atoi(SplitLeft(string, multiplySymbol).c_str());
	right = std::atoi(SplitRight(string, multiplySymbol).c_str());
	return left * right;
}

int CalculatorProcessor::ModFunction(const std::string& string)
{
	char modSymbol = '%';
	left = std::atoi(SplitLeft(string, modSymbol).c_str());
	right =std::atoi(SplitRight(string, modSymbol).c_str());
	return left % right;
}
