#pragma once
#include <string>
class Cylinder
{
public:
	Cylinder();
	~Cylinder();

	void SetHeight(int);
	void SetRadius(int);
	void SetTopCap(bool);
	void SetBottomCap(bool);
	void SetColor(const std::string&);

	std::string PrintInfo();

private:
	int height_ = 10;
	int radius_ = 2;
	bool topCap_ = false;
	bool bottomCap_ = false;
	std::string color_ = "#ffffff";
};

