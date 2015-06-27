#ifndef BUW_SHAPE_HPP
#define BUW_SHAPE_HPP
#include "color.hpp"
#include <string>

class Shape
{

public:

	Shape();
	Shape(std::string, Color);
	~Shape();

	virtual double area() const = 0;
	virtual double volume() const = 0;
	Color color() const;
	std::string name() const; 

protected:

	Color color_;

	std::string name_;
};

#endif //#define BUW_LIST_HP