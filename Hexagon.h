#pragma once
#pragma once
#include "Shape.h"

class Hexagon :
	public Shape
{
public:
	Hexagon(std::string = "Hexagon", Color = { 0,0,0 }, Point = { 0,0 }, double = 1.0, double = 0);
	void move(Point) override;
	void rotateAboutPoint(double, Point = { 0,0 }) override;
	void scale(double) override;
	void check() override;
	friend std::ostream& operator<<(std::ostream&, const Hexagon&);
	~Hexagon();
private:
	Point center;
	double radius;
	double angle;
};
