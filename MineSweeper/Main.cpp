#include "Main.h"
wxBEGIN_EVENT_TABLE(Main, wxFrame)

wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Main", wxPoint(40, 40), wxSize(408, 580)) {

	button0 = new wxButton(this, 100, "0", wxPoint(1,300), wxSize(90, 60));
	button1 = new wxButton(this, 101, "1", wxPoint(91,300), wxSize(90, 60));
	button2 = new wxButton(this, 102, "2", wxPoint(181,300), wxSize(90, 60));
	button3 = new wxButton(this, 103, "3", wxPoint(1,360), wxSize(90, 60));
	button4 = new wxButton(this, 104, "4", wxPoint(91,360), wxSize(90, 60));
	button5 = new wxButton(this, 105, "5", wxPoint(181,360), wxSize(90, 60));
	button6 = new wxButton(this, 106, "6", wxPoint(1,420), wxSize(90, 60));
	button7 = new wxButton(this, 107, "7", wxPoint(91,420), wxSize(90, 60));
	button8 = new wxButton(this, 108, "8", wxPoint(181,420), wxSize(90, 60));
	button9 = new wxButton(this, 109, "9", wxPoint(91,480), wxSize(90, 60));
	buttonEquals = new wxButton(this, 110, "=", wxPoint(181,480), wxSize(90, 60));
	buttonDot = new wxButton(this, 111, ".", wxPoint(1,480), wxSize(90, 60));
	buttonClear = new wxButton(this, 112, "CLEAR", wxPoint(271,480), wxSize(120, 60));
	buttonAdd = new wxButton(this, 113, "+", wxPoint(271,420), wxSize(120, 60));
	buttonSubtract = new wxButton(this, 114, "-", wxPoint(271,360), wxSize(120, 60));
	buttonMulti = new wxButton(this, 115, "*", wxPoint(271,300), wxSize(120, 60));
	buttonDivide = new wxButton(this, 116, "÷", wxPoint(271,240), wxSize(120, 60));
	buttonMod = new wxButton(this, 117, "%", wxPoint(271,180), wxSize(120, 60));
	buttonBinary = new wxButton(this, 118, "BINARY", wxPoint(191,120), wxSize(200, 60));
	buttonHex = new wxButton(this, 119, "HEX", wxPoint(1,120), wxSize(190, 60));
	text = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(1, 180), wxSize(270, 120),wxALIGN_RIGHT);
	header = new wxStaticText(this, wxID_ANY, "CALCULATOR", wxPoint(1, 1), wxSize(408, 120),wxALIGN_CENTER);

	//SetBackgroundColour(wxColor(153, 204, 255));
	
}
Main::~Main() {
	delete[]button0;
	delete[]text;
}
void Main::OnButtonClick(wxCommandEvent& evt) {
	
	evt.Skip();
}