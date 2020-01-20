#include "Cylinder.h"

Cylinder::Cylinder()
{
}


Cylinder::~Cylinder()
{
}

void Cylinder::SetHeight(int height)
{
	height_ = height;
}

void Cylinder::SetRadius(int radius)
{
	radius_ = radius;
}

void Cylinder::SetTopCap(bool topCap)
{
	topCap_ = topCap;
}

void Cylinder::SetBottomCap(bool bottomCap)
{
	bottomCap_ = bottomCap;
}

void Cylinder::SetColor(const std::string& color)
{
	color_ = color;
}

std::string Cylinder::PrintInfo()
{
	std::string info = ("Info : \n Height = " + std::to_string(height_) + " Radius = " + std::to_string(radius_) + " topCap = " + std::to_string(topCap_) + " bottomCap = " + std::to_string(bottomCap_) + " Color = " + color_);
	return info;
}
