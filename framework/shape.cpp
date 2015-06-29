#include "shape.hpp"

Shape::Shape():
	name_{}, color_{0.0f,0.0f,0.0f}
	{}

Shape::Shape(std::string n, Color col):
	name_{n}, color_{col}
	{}

Shape::~Shape()
{}

Color Shape::color() const
{
	return color_;
}

std::string Shape::name() const
{
	return name_;
}

std::ostream& operator<<(std::ostream& os, Shape const& s)
{
	return s.print(os);
}


std::ostream& Shape::print(std::ostream& os) const
{
    os << "[Name: " << name_ << "][Color: " 
  	 << color_.r << ","
     << color_.g << ','
     << color_.b << ']';
	
	return os;
}
