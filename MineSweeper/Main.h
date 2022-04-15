#pragma once
#include "ButtonFactory.h"
class Main :public wxFrame
{
public:
	Main();
	~Main();
	wxButton* button0 = nullptr;
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* button4 = nullptr;
	wxButton* button5 = nullptr;
	wxButton* button6 = nullptr;
	wxButton* button7 = nullptr;
	wxButton* button8 = nullptr;
	wxButton* button9 = nullptr;
	wxButton* buttonDot = nullptr;
	wxButton* buttonEquals = nullptr;
	wxButton* buttonClear = nullptr;
	wxButton* buttonDivide = nullptr;
	wxButton* buttonSubtract = nullptr;
	wxButton* buttonAdd = nullptr;
	wxButton* buttonMulti = nullptr;
	wxButton* buttonMod = nullptr;
	wxButton* buttonBinary = nullptr;
	wxButton* buttonHex = nullptr;
	wxButton* buttonDeci = nullptr;
	wxTextCtrl* text = nullptr;
	wxStaticText* header = nullptr;
	wxString stringAppend = "";
	wxString stringLeft = "";
	wxString stringRight = "";

	int splitLeft;
	int splitRight;
	bool firstClick = true;

	void NumButtonClick(wxCommandEvent& evt);
	void OpperationButtonClick(wxCommandEvent& evt);
	void EqualsButtonClick(wxCommandEvent& evt);
	int numStore;
	
	wxDECLARE_EVENT_TABLE();

};

