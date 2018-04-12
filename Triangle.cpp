#include "Triangle.h"

Triangle::Triangle(std::string name, Color color,  Point a, Point b, Point c)
	: Shape(name, color), a(a), b(b), c(c)
{	
	check();
}

void Triangle::move(Point point) 
{
	Point Center = findCenter();
	Point dpoint = point - Center;
	a = a + dpoint;
	b = b + dpoint;
	c = c + dpoint;
	Center = Center + dpoint;
}

void Triangle::rotateAboutPoint(double pangle, Point point)
{
	Point Center = findCenter();
	a.RotatePoint(point, pangle);
	b.RotatePoint(point, pangle);
	c.RotatePoint(point, pangle);
   // Center.RotatePoint(point, angle);
}

void Triangle::scale(double scale)
{
	a = a * scale;
	b = b * scale;
	c = c * scale;
//	Center = findCenter();
}
Point Triangle::findCenter() const
{
	Point Center;
	Center = Center + a + b + c;
	Center = Center * (1.0 / 3);
	return Center;
}
void Triangle::check()
{	
	if (abs((b.x - a.x)*(c.y - a.y) - (c.x - a.x)*(b.y - a.y)) == 0)
		name = "Wrong!";
	else if (name == "Wrong!")
		name = "Triangle";
}
Triangle::~Triangle()
{
}
std::ostream & operator<<(std::ostream & stream, const Triangle & triangle)
{
	stream << std::endl << "Id: " << triangle.Id << std::endl;
	stream << "Name: " << triangle.name << std::endl;
	stream << "Color: " << triangle.color << std::endl;
	stream << "Top 1: " << triangle.a<< std::endl;
	stream << "Top 2: " << triangle.b << std::endl;
	stream << "Top 3: " << triangle.c << std::endl;
	stream << "Center: " << triangle.findCenter() << std::endl;
	return stream;
}
