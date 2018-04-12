#pragma once
#include "Shape.h"

class Ellipse :
	public Shape
{
public:
	Ellipse(std::string = "Ellipse", Color = { 0,0,0 }, Point = { 0,0 }, double = 1.0, double = 2.0, double = 0);
	void move(Point);
	void rotateAboutPoint(double, Point = { 0,0 }) override;
	void scale(double) override;
	void check() override;
	friend std::ostream& operator<<(std::ostream&, const Ellipse&);
	~Ellipse();
private:
	Point center;
	double r1, r2, angle;
};