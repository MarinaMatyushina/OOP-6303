#pragma once
#include "Shape.h"

class Triangle : public Shape
{
public:
	Triangle(std::string = "Triangle", Color = { 0,0,0 }, Point = { 0, 0 } , Point = { 1, 0 }, Point = { 0, 1 });
	void move(Point) override;
	void rotateAboutPoint(double, Point = { 0,0 }) override;
	void scale(double) override;
	Point findCenter() const;
	void check() override;
	friend std::ostream& operator<<(std::ostream&, const Triangle&);
	~Triangle();
private:
	Point a, b, c;
};