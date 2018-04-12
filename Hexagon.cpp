#include "Hexagon.h"

Hexagon::Hexagon(std::string name, Color color, Point center, double radius, double angle)
	: Shape(name, color), center(center), radius(radius), angle(angle)
{
	check();
}

void Hexagon::move(Point newCenter)
{
	center = newCenter;
}


void Hexagon::rotateAboutPoint(double pangle, Point p)
{
	center.RotatePoint(p, pangle);
	angle += pangle;
	angle = ((int)angle) % 180 ;
}

void Hexagon::scale(double scale)
{
	radius *= scale;
	check();
}

void Hexagon::check()
{
	if (radius <= 0)
		name = "Wrong!";
	else if (name == "Wrong!")
		name = "Hexagon";
}

Hexagon::~Hexagon()
{
}

std::ostream & operator<<(std::ostream & stream, const Hexagon & hexagon)
{
	stream << std::endl << "Id: " << hexagon.Id << std::endl;
	stream << "Name: " << hexagon.name << std::endl;
	stream << "Color: " << hexagon.color << std::endl;
	stream << "Center: " << hexagon.center << std::endl;
	stream << "Radius: " << hexagon.radius << std::endl;
	stream << "Rotation angle: " << hexagon.angle << std::endl;
	return stream;
}