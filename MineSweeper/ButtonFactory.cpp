#include "ButtonFactory.h"

wxButton* ButtonFactory::CreateNumberButton(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, label, pos, size);
}

wxButton* ButtonFactory::CreateAddButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "+", pos, size);
}

wxButton* ButtonFactory::CreateMinusButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "-", pos, size);
}

wxButton* ButtonFactory::CreateMultiplyButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "*", pos, size);
}

wxButton* ButtonFactory::CreateDivideButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "÷", pos, size);
}

wxButton* ButtonFactory::CreateModuleButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "%", pos, size);
}

wxButton* ButtonFactory::CreateEqualsButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "=", pos, size);
}

wxButton* ButtonFactory::CreateNegativeButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "~", pos, size);
}

wxButton* ButtonFactory::CreateClearButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "CLEAR", pos, size);
}

wxButton* ButtonFactory::CreateBinaryButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "BINARY", pos, size);
}

wxButton* ButtonFactory::CreatehexButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "HEX", pos, size);
}

wxButton* ButtonFactory::CreateDeciButton(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size)
{
	return new wxButton(parent, id, "DECI", pos, size);
}
