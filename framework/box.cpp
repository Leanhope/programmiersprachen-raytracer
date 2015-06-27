#include "box.hpp"

Box::Box():

	minimum_{glm::vec3{0.0,0.0,0.0}}, maximum_{glm::vec3{0.0,0.0,0.0}}
	{}

Box::Box(glm::vec3 min, glm::vec3 max):

	minimum_{min}, maximum_{max}
	{}

Box::Box(glm::vec3 min, glm::vec3 max, std::string n, Color col):

	minimum_{min}, maximum_{max}, Shape(n, col)
	{}

Box::~Box()
{}

double Box::area() const
{
	glm::vec3 tmp = maximum_ - minimum_;
	double v1 = abs(tmp.x) * abs(tmp.y);
	double v2 = abs(tmp.x) * abs(tmp.z);
	double v3 = abs(tmp.y) * abs(tmp.z);

	return 2*v1 + 2*v2 + 2*v3; 
}

double Box::volume() const
{
	glm::vec3 tmp = maximum_ - minimum_;
	return abs(tmp.x) * abs(tmp.y) * abs(tmp.z);
}

glm::vec3 Box::min() const
{
	return minimum_;
}

glm::vec3 Box::max() const
{
	return maximum_;
}