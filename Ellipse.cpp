#include "Ellipse.h"

Ellipse::Ellipse(std::string name, Color color, Point center, double r1, double r2, double angle)
	:Shape(name, color), center(center), r1(fabs(r1)), r2(fabs(r2)), angle(angle)
{
	check();
}

void Ellipse::move(Point newCenter)
{
	center = newCenter;
}

void Ellipse::rotateAboutPoint(double pangle, Point p)
{
	center.RotatePoint(p, pangle);
	angle += pangle;
	angle = ((int)angle) % 180;
}

void Ellipse::scale(double scale)
{
	r1 *= fabs(scale);
	r2 *= fabs(scale);
	check();
}


void Ellipse::check()
{
	if (r1 <= 0 || r2 <= 0)
		name = "Wrong!";
	else if (name == "Wrong!")
		name = "Ellipse";
}

Ellipse::~Ellipse()
{
}

std::ostream & operator<<(std::ostream & stream, const Ellipse & ellipse)
{
	stream << std::endl << "Id: " << ellipse.Id << std::endl;
	stream << "Name: " << ellipse.name << std::endl;
	stream << "Color: " << ellipse.color << std::endl;
	stream << "Center: " << ellipse.center << std::endl;
	stream << "Litle radius: " << ellipse.r1 << std::endl;
	stream << "Big radius: " << ellipse.r2 << std::endl;
	stream << "Rotation angle: " << ellipse.angle << std::endl;
	return stream;
}