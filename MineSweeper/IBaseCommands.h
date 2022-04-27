#pragma once
#include <string>
class IBaseCommands
{
public:
	float nextVal = 0;
	float currentVal = 0;
	virtual void Execute() = 0;
};

class AddCommand : public IBaseCommands
{
public:
	void Execute() {
		nextVal += currentVal;
	}
};

class SubtractCommand : public IBaseCommands
{
public:
	void Execute() {
		nextVal -= currentVal;
	}
};

class MultiplyCommand : public IBaseCommands
{
public:
	void Execute() {
		nextVal *= currentVal;
	}
};

class DivideCommand : public IBaseCommands
{
public:
	void Execute() {
		nextVal /= currentVal;
	}
};

class ModCommand : public IBaseCommands
{
public:
	void Execute() {
		nextVal = (int)nextVal % (int)currentVal;
	}
};
class EqualsCommand : public IBaseCommands
{
public:
	void Execute() {}
	EqualsCommand() {}
};

