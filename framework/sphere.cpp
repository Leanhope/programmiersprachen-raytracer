#include "sphere.hpp"

Sphere::Sphere():

	center_{glm::vec3{0.0,0.0,0.0}}, radius_{0.0}
	{}

Sphere::Sphere(glm::vec3 cent, double rad):

	center_{cent}, radius_{rad}
	{}

Sphere::Sphere(glm::vec3 cent, double rad, std::string n, Color col):

	center_{cent}, radius_{rad}, Shape(n, col)
	{}

Sphere::~Sphere()
{}

double Sphere::area() const
{
	return 4 * M_PI * radius_ * radius_;
}

double Sphere::volume() const
{
	return 4.0/3.0 * M_PI * radius_ * radius_ * radius_;
}

glm::vec3 Sphere::center() const
{
	return center_;
}

double Sphere::radius() const
{
	return radius_;
}