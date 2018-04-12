#include "Point.h"

Point::Point(double x, double y)
	: x(x), y(y)
{
}

void Point::setPoint(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Point::setX(double x)
{
	this->x = x;
}

void Point::setY(double y)
{
	this->y = y;
}

double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

void Point::RotatePoint(Point around, double angle)
{
	if (  ( ((int)angle % 360) != 0  ) && ( angle != 0 )  ) {
		//double rad = angle * (M_PI / 180);
		Point p(0, 0);
		double c = cos(angle * (M_PI / 180));
		double s = sin(angle * (M_PI / 180));
		if (abs(c) < 0.0001) {	
			c = 0.0;
		}
		if (abs(s) < 0.0001) {
			s = 0.0;
		}
		p.x = around.x + (this->x - around.x)*c - (this->y - around.y)*s;
		p.y = around.y + (this->x - around.x)*s + (this->y - around.y)*c;
		//p.x = around.x - (this->x - around.x)*c + (this->y - around.y)*s;
		//p.y = around.y + (this->x - around.x)*s + (this->y - around.y)*c;
		this->x = p.x;
		this->y = p.y;
	}
}

Point::~Point()
{
}

std::ostream & operator<<(std::ostream& stream, const Point & p)
{
	stream << p.x << " " << p.y;
	return stream;
}
Point Point::operator -(const Point& p)
{
	Point tmp(this->x - p.x, this->y - p.y);
	return tmp;
}

Point Point::operator+(const Point & p)
{
	return Point(x + p.x, y + p.y);
}

Point& Point::operator=(const Point& p)
{
	if (this != &p)
	{
		this->x = p.x;
		this->y = p.y;
	}
	return *this;
}

bool Point::operator==(const Point & p)
{
	return (x == p.y) && (y == p.y);
}

Point Point::operator*(double a)
{
	this->x = this->x * a;
	this->y = this->y * a;
	return *this;
}
