#ifndef BUW_BOX_HPP
#define BUW_BOX_HPP

# include <glm/vec3.hpp>
# include "shape.hpp" 

class Box : public Shape
{

public:
	
	Box();
	Box(glm::vec3, glm::vec3);
	Box(glm::vec3, glm::vec3, std::string, Color);
	~Box();

	double area() const override;
	double volume() const override;
	glm::vec3 min() const;
	glm::vec3 max() const;
	std::ostream& print(std::ostream& os) const override; 

private:

	glm::vec3 minimum_;
	glm::vec3 maximum_; 
};

#endif //#define BUW_LIST_HP