#include "Main.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
   EVT_BUTTON(wxID_ANY,NumButtonClick)
   EVT_BUTTON(wxID_ANY,OpperationButtonClick)
	EVT_BUTTON(110,EqualsButtonClick)
wxEND_EVENT_TABLE()

Main::Main() : wxFrame(nullptr, wxID_ANY, "Main", wxPoint(40, 40), wxSize(408, 580)) {
	
	button0 = ButtonFactory::CreateNumberButton(this, 100, "0", wxPoint(1,300), wxSize(90, 60));
	button1 = ButtonFactory::CreateNumberButton(this, 101, "1", wxPoint(91,300), wxSize(90, 60));
	button2 = ButtonFactory::CreateNumberButton(this, 102, "2", wxPoint(181,300), wxSize(90, 60));
	button3 = ButtonFactory::CreateNumberButton(this, 103, "3", wxPoint(1,360), wxSize(90, 60));
	button4 = ButtonFactory::CreateNumberButton(this, 104, "4", wxPoint(91,360), wxSize(90, 60));
	button5 = ButtonFactory::CreateNumberButton(this, 105, "5", wxPoint(181,360), wxSize(90, 60));
	button6 = ButtonFactory::CreateNumberButton(this, 106, "6", wxPoint(1,420), wxSize(90, 60));
	button7 = ButtonFactory::CreateNumberButton(this, 107, "7", wxPoint(91,420), wxSize(90, 60));
	button8 = ButtonFactory::CreateNumberButton(this, 108, "8", wxPoint(181,420), wxSize(90, 60));
	button9 = ButtonFactory::CreateNumberButton(this, 109, "9", wxPoint(91,480), wxSize(90, 60));
	buttonEquals = ButtonFactory::CreateEqualsButton(this, 110, wxPoint(181,480), wxSize(90, 60));
	buttonDot = ButtonFactory::CreateDotButton(this, 111, wxPoint(1,480), wxSize(90, 60));
	buttonClear = ButtonFactory::CreateClearButton(this, 112, wxPoint(271,480), wxSize(120, 60));
	buttonAdd = ButtonFactory::CreateAddButton(this, 113, wxPoint(271,420), wxSize(120, 60));
	buttonSubtract = ButtonFactory::CreateMinusButton(this, 114, wxPoint(271,360), wxSize(120, 60));
	buttonMulti = ButtonFactory::CreateMultiplyButton(this, 115, wxPoint(271,300), wxSize(120, 60));
	buttonDivide = ButtonFactory::CreateDivideButton(this, 116, wxPoint(271,240), wxSize(120, 60));
	buttonMod = ButtonFactory::CreateModuleButton(this, 117, wxPoint(271,180), wxSize(120, 60));
	buttonBinary = ButtonFactory::CreateBinaryButton(this, 118, wxPoint(261,120), wxSize(130, 60));
	buttonHex = ButtonFactory::CreatehexButton(this, 119, wxPoint(1, 120), wxSize(130, 60));
	buttonDeci = ButtonFactory::CreateDeciButton(this, 119,  wxPoint(131, 120), wxSize(130, 60));
	text = new wxTextCtrl(this, wxID_ANY, "0", wxPoint(1, 180), wxSize(270, 120),wxALIGN_RIGHT);
	header = new wxStaticText(this, wxID_ANY, "\nCALCULATOR", wxPoint(1, 1), wxSize(390, 120),wxALIGN_CENTER);
	wxFont font(36, wxFONTFAMILY_TELETYPE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_EXTRABOLD, false);
	text->SetFont(font);
	header->SetFont(font);
	header->SetBackgroundColour(wxColor(255, 153, 255));
	
}
Main::~Main() {
	delete[]button0;
	delete[]button1;
	delete[]button2;
	delete[]button3;
	delete[]button4;
	delete[]button5;
	delete[]button6;
	delete[]button7;
	delete[]button8;
	delete[]button9;
	delete[]text;
	delete[]header;
}
void Main::NumButtonClick(wxCommandEvent& evt) {
	if (firstClick == true) {
		text->SetLabelText("");
		firstClick = false;
	}
	if (evt.GetId() == 100) {
		text->AppendText("0");
		stringAppend.append("0");
		numStore = 0;
	}
	else if (evt.GetId() == 101) {
		text->AppendText("1");
		stringAppend.append("1");
		numStore = 1;
	}
	else if (evt.GetId() == 102) {
		text->AppendText("2");
		stringAppend.append("2");
		numStore = 2;
	}
	else if (evt.GetId() == 103) {
		text->AppendText("3");
		stringAppend.append("3");
		numStore = 3;
	}
	else if (evt.GetId() == 104) {
		text->AppendText("4");
		stringAppend.append("4");
		numStore = 4;
	}
	else if (evt.GetId() == 105) {
		text->AppendText("5");
		stringAppend.append("5");
		numStore = 5;
	}
	else if (evt.GetId() == 106) {
		text->AppendText("6");
		stringAppend.append("6");
		numStore = 6;
	}
	else if (evt.GetId() == 107) {
		text->AppendText("7");
		stringAppend.append("7");
		numStore = 7;
	}
	else if (evt.GetId() == 108) {
		text->AppendText("8");
		stringAppend.append("8");
		numStore = 8;
	}
	else if (evt.GetId() == 109) {
		text->AppendText("9");
		stringAppend.append("9");
		numStore = 9;
	}
	evt.Skip();
}
void Main::OpperationButtonClick(wxCommandEvent& evt) {
	if (evt.GetId() == 111) {
		text->AppendText(".");
		stringAppend.append(".");
	}
	else if (evt.GetId() == 112) {
		text->Clear();
		stringAppend.clear();
		text->SetValue("0");
		firstClick = true;
	}
	else if (evt.GetId() == 113) {
		text->AppendText("+");
		stringAppend.append("+");
	}
	else if (evt.GetId() == 114) {
		text->AppendText("-");
		stringAppend.append("-");
	}
	else if (evt.GetId() == 115) {
		text->AppendText("*");
		stringAppend.append("*");
	}
	else if (evt.GetId() == 116) {
		text->AppendText("÷");
		stringAppend.append("÷");
	}
	else if (evt.GetId() == 117) {
		text->AppendText("%");
		stringAppend.append("%");
	}
	evt.Skip();
}
void Main::EqualsButtonClick(wxCommandEvent& evt) {
	if (evt.GetId() == 110) {
		if (stringAppend.find("+") != -1) {
			int num = cProcess->AddFunction(stringAppend.ToStdString());
			text->SetLabelText(std::to_string(num));
			stringAppend.clear();
			stringAppend.Append(std::to_string(num));
		}
		else if (stringAppend.find("-") != -1) {
			int num = cProcess->SubtractFunction(stringAppend.ToStdString());
			text->SetLabelText(std::to_string(num));
			stringAppend.clear();
			stringAppend.Append(std::to_string(num));
		}
		else if (stringAppend.find("*") != -1) {
			int num = cProcess->MultiplyFunction(stringAppend.ToStdString());
			text->SetLabelText(std::to_string(num));
			stringAppend.clear();
			stringAppend.Append(std::to_string(num));
		}
		else if(stringAppend.find("÷") != -1) {
			int num = cProcess->DivideFunction(stringAppend.ToStdString());
			text->SetLabelText(std::to_string(num));
			stringAppend.clear();
			stringAppend.Append(std::to_string(num));
		}
		else if (stringAppend.find("%") != -1) {
			int num = cProcess->ModFunction(stringAppend.ToStdString());
			text->SetLabelText(std::to_string(num));
			stringAppend.clear();
			stringAppend.Append(std::to_string(num));
		}
	}
}