#pragma once
#include <iostream>
#define M_PI 3.1415926535897932384626433832795
#include<cmath>

class Point
{
public:
	Point(double = 0.0, double = 0.0);
	void setPoint(double, double);
	void setX(double);
	void setY(double);
	double getX() const;
	double getY() const;
	void RotatePoint(Point, double);
	friend std::ostream& operator<<(std::ostream&, const Point&);
	
	Point operator-(const Point& );
	Point operator+(const Point& );
	Point & operator=(const Point&);
	bool operator==(const Point& );
	Point operator*(double );
	
	~Point();
//private:
	double x, y;
};