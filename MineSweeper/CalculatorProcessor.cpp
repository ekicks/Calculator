#include "CalculatorProcessor.h"

void CalculatorProcessor::AddCommand(IBaseCommands* command, int num) {
	if (lastAdded != nullptr) {
		lastAdded->currentVal = num;
	}
	commands.push_back(command);
	lastAdded = command;
}
float CalculatorProcessor::CommandExecution() {

	float tempNum;
	for (std::list<IBaseCommands*>::iterator it = commands.begin(); it != commands.end();) {
		lastAdded = (*it);
		lastAdded->Execute();
		tempNum = lastAdded->nextVal;
		it++;

		if (it != commands.end()) {
			(*it)->nextVal = tempNum;
		}
		else {
			commands.clear();
			lastAdded = nullptr;
		}
	}
	return tempNum;
}
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

float CalculatorProcessor::AddFunction(const std::string& string)
{
	char addSymbol = '+';
	left = std::atof(SplitLeft(string, addSymbol).c_str());
	right = std::atof(SplitRight(string, addSymbol).c_str());
	return left + right;
}

float CalculatorProcessor::SubtractFunction(const std::string& string)
{
	char minusSymbol = '-';
	left = std::atof(SplitLeft(string, minusSymbol).c_str());
	right = std::atof(SplitRight(string, minusSymbol).c_str());
	return left - right;
}

float CalculatorProcessor::DivideFunction(const std::string& string)
{
	char divideSymbol = '÷';
	left = std::atof(SplitLeft(string, divideSymbol).c_str());
	right = std::atof(SplitRight(string, divideSymbol).c_str());
	return left / right;
}

float CalculatorProcessor::MultiplyFunction(const std::string& string)
{
	char multiplySymbol = '*';
	left = std::atof(SplitLeft(string, multiplySymbol).c_str());
	right = std::atof(SplitRight(string, multiplySymbol).c_str());
	return left * right;
}

int CalculatorProcessor::ModFunction(const std::string& string)
{
	char modSymbol = '%';
	left = std::atoi(SplitLeft(string, modSymbol).c_str());
	right =std::atoi(SplitRight(string, modSymbol).c_str());
	return left % right;
}

std::string CalculatorProcessor::BinaryFunction(long long bin) 
{
	std::string text = "";
	for (int i = 0; i < 8; i++) {
		if (bin % 2 == 0) {
			text = "0" + text;
		}
		else {
			text = "1" + text;
		}
		bin /= 2;
	}
	return text;
}

std::string CalculatorProcessor::HexFunction(int number)
{
	std::stringstream text;
	if (number < 0)
	{
		number *= -1;
		text << '-' << "0x" << std::hex << number;
	}
	else {
		text << "0x" << std::hex << number;
	}
	return text.str();
}
