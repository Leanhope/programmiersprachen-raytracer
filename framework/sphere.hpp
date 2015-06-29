#ifndef BUW_SPHERE_HPP
#define BUW_SPHERE_HPP
#include "shape.hpp"
#include "ray.hpp"
#include <glm/vec3.hpp>
#include <glm/gtx/intersect.hpp>
#include <cmath>

class Sphere : public Shape
{
	public:
	
	Sphere();
	Sphere(glm::vec3, double);
	Sphere(glm::vec3, double, std::string, Color);
	~Sphere();

	std::ostream& print(std::ostream& os) const override; 

	bool intersect(Ray const&, float&) const;
	double area() const override;
	double volume() const override;
	glm::vec3 center() const ;
	double radius() const;

private:

	glm::vec3 center_;
	double radius_; 
};

#endif //#define BUW_LIST_HP