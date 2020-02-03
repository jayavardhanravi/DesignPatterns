#pragma once
#include <String>

class GuiData
{
public:
	GuiData();
	~GuiData();

	friend class GuiComponent;

	GuiData * GetCopy();

	void SetData(int);
	void SetChecked(bool);
	void SetLabel(const std::string&);

	int GetData();
	bool GetChecked();
	std::string GetLabel();

	std::string PrintState();

private:
	int data_;
	bool checked_;
	std::string label_;
};

