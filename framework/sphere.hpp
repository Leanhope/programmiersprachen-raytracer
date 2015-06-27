#ifndef BUW_SPHERE_HPP
#define BUW_SPHERE_HPP
#include "shape.hpp"
#include <glm/vec3.hpp>
#include <cmath>

class Sphere : public Shape
{
	public:
	
	Sphere();
	Sphere(glm::vec3, double);
	Sphere(glm::vec3, double, std::string, Color);
	~Sphere();

	double area() const override;
	double volume() const override;
	glm::vec3 center() const ;
	double radius() const;

private:

	glm::vec3 center_;
	double radius_; 
};

#endif //#define BUW_LIST_HP