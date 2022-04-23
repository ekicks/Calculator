#include "CalculatorProcessor.h"

void CalculatorProcessor::AddCommand(IBaseCommands* command, int num) {
	if (lastAdded != nullptr) {
		lastAdded->currentVal = num;
	}
	commands.push_back(command);
	lastAdded = command;
}
int CalculatorProcessor::CommandExecution() {

	int tempNum;
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
