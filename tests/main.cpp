#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <box.hpp>
#include <sphere.hpp>

TEST_CASE("boxtest", "box")
{
	Box b = Box{};
	Box b2 = Box{{1.0,1.0,1.0}, {2.0,2.0,2.0}};
	glm::vec3 comp1 = glm::vec3{1.0,1.0,1.0};
	glm::vec3 comp2 = glm::vec3{2.0,2.0,2.0};
	REQUIRE(b2.area() == 6);
	REQUIRE(b2.volume() == 1);
	REQUIRE(b2.max() == comp2);
	REQUIRE(b2.min() == comp1);

}

TEST_CASE("spheretest", "sphere")
{
	Sphere s = Sphere{};
	REQUIRE(s.area() == 0);
	Sphere s1 = Sphere{{0.0,0.0,0.0}, {2.0}};
	REQUIRE(s1.area() == Approx(50.2655));
	REQUIRE(s1.volume() == Approx(33.5103));
	REQUIRE(s1.radius() == 2.0);
	glm::vec3 comp = glm::vec3{0.0,0.0,0.0};
	REQUIRE(s1.center() == comp);
}

TEST_CASE("colorname", "cn")
{
	Box b = Box{{1.0,1.0,1.0}, {2.0,2.0,2.0}, "Box", {0.0,0.0,0.0}};
	Color comp = Color{0.0, 0.0, 0.0};
	REQUIRE(b.color() == comp);	
}
int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}
