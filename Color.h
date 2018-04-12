#pragma once
#include <iostream>

class Color
{
public:
	Color(unsigned char = 0, unsigned char = 0, unsigned char = 0);
	void setColor(unsigned char, unsigned char, unsigned char);
	friend std::ostream& operator<<(std::ostream&, const Color&);
	~Color();

private:
	unsigned char R;
	unsigned char G;
	unsigned char B;
};
