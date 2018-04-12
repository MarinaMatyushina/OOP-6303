#pragma once
#include "Point.h"
#include "Color.h"
#include <string>


class Shape
{
public:
	Shape(std::string = "Object", Color = { 0,0,0 });
	virtual void move(Point) = 0;
	virtual void rotateAboutPoint(double, Point) = 0;
	virtual void scale(double) = 0;
	virtual void check() = 0;
	void setColor(Color);
	Color getColor() const;
	std::string getName() const;
	size_t getId();
	friend std::ostream& operator<<(std::ostream&, const Shape&);
	~Shape();
protected:
	std::string name;
	Color color;
	size_t Id;
	static size_t number;



};