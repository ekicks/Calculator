#include "../MineSweeper/CalculatorProcessor.h"
#include "../MineSweeper/CalculatorProcessor.cpp"
#include "wx/wx.h"

CalculatorProcessor calcProcess;

bool HexFuncTest() {
	std::string hexVal = calcProcess.HexFunction(69);
	return hexVal == "45";
}
bool SecondHexFuncTest() {
	std::string hexVal = "0x1d";
	return hexVal == calcProcess.HexFunction(29);
}
bool BinaryFuncTest() {
	std::string binaryVal = calcProcess.BinaryFunction(69);
	return binaryVal == "1000101";
}
bool SecondBinaryFuncTest() {
	std::string binaryVal = "01001111";
	return binaryVal == calcProcess.BinaryFunction(79);
}
bool ThirdBinaryFuncTest() {
	std::string binaryVal = "01011011";
	return binaryVal == calcProcess.BinaryFunction(91);
}
bool ModFuncTest() {
	int modedVal = calcProcess.ModFunction("83 % 2");
	return modedVal == 1;
}
bool DivideFuncTest(int val) {
	int dividedVal = calcProcess.DivideFunction("39 ÷ 8");
	return dividedVal == 4;
}
bool MultiplyFuncTest(int val) {
	int multiplyVal = calcProcess.MultiplyFunction("8 * 13");
	return multiplyVal == 104;
}
bool SubtractFuncTest(int val) {
	int subtractVal = calcProcess.SubtractFunction("47 - 36");
	return subtractVal == 11;
}
bool AddFuncTest(int val) {
	int addVal = calcProcess.AddFunction("28 + 43");
	return addVal == 71;
}


