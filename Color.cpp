#include "Color.h"

Color::Color(unsigned char R, unsigned char G, unsigned char B)
	: R(R), G(G), B(B)
{
}

void Color::setColor(unsigned char R, unsigned char G, unsigned char B)
{
	this->R = R;
	this->G = G;
	this->B = B;
}

Color::~Color()
{
}

std::ostream & operator<<(std::ostream &stream, const Color & color)
{
	stream << "R:" << (unsigned int)color.R << " G:" << (unsigned int)color.G << " B:" << (unsigned int)color.B;
	return stream;
}