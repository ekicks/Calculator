#include "../MineSweeper/ButtonFactory.h"
#include "../MineSweeper/Buttonfactory.cpp"

ButtonFactory buttonFactory;

bool AddCheck(int id) {
	wxButton* button = buttonFactory.CreateAddButton(nullptr, id);
	int getId = button->GetId();
	delete button;
	return getId == id;
}
bool MinusCheck(int id) {
	wxButton* button = buttonFactory.CreateMinusButton(nullptr, id);
	int getId = button->GetId();
	delete button;
	return getId == id;
}
bool MultiplyCheck(int id) {
	wxButton* button = buttonFactory.CreateMultiplyButton(nullptr, id);
	int getId = button->GetId();
	delete button;
	return getId == id;
}
bool DivideCheck(int id) {
	wxButton* button = buttonFactory.CreateMultiplyButton(nullptr, id);
	int getId = button->GetId();
	delete button;
	return getId == id;
}
bool ModCheck(int id) {
	wxButton* button = buttonFactory.CreateModuleButton(nullptr, id);
	int getId = button->GetId();
	delete button;
	return getId == id;
}
bool EqualsCheck(int id) {
	wxButton* button = buttonFactory.CreateEqualsButton(nullptr, id);
	int getId = button->GetId();
	delete button;
	return getId == id;
}
bool HexCheck(int id) {
	wxButton* button = buttonFactory.CreatehexButton(nullptr, id);
	int getId = button->GetId();
	delete button;
	return getId == id;
}
bool DeciCheck(int id) {
	wxButton* button = buttonFactory.CreateDeciButton(nullptr, id);
	int getId = button->GetId();
	delete button;
	return getId == id;
}
bool ClearCheck(int id) {
	wxButton* button = buttonFactory.CreateClearButton(nullptr, id);
	int getId = button->GetId();
	delete button;
	return getId == id;
}
bool NegativeCheck(int id) {
	wxButton* button = buttonFactory.CreateNegativeButton(nullptr, id);
	int getId = button->GetId();
	delete button;
	return getId == id;
}