#include "Shape.h"


Shape::Shape(std::string name, Color color)
	:name(name), color(color)
{
	Id = getId();
}

void Shape::setColor(Color color)
{
	this->color = color;
}

Color Shape::getColor() const
{
	return color;
}

std::string Shape::getName() const
{
	return name;
}

size_t Shape::getId()
{
	return Shape:: number++;
}

size_t Shape::number = 0;

Shape::~Shape()
{
}