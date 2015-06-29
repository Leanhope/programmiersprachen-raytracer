#ifndef BUW_SHAPE_HPP
#define BUW_SHAPE_HPP
#include "color.hpp"
#include <string>
#include <iostream>

class Shape
{

public:

	Shape();
	Shape(std::string, Color);
	virtual ~Shape();

	virtual double area() const = 0;
	virtual double volume() const = 0;
	Color color() const;
	std::string name() const;
	virtual std::ostream& print(std::ostream& os) const; 

protected:

	Color color_;

	std::string name_;
};

std::ostream& operator<< (std::ostream& os, Shape const& s);

#endif //#define BUW_LIST_HP