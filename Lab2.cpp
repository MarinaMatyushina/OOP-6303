//#include<iostream>
#include "Triangle.h"
#include "Ellipse.h"
#include "Hexagon.h"

using namespace std;

int main() {
	
	/*
	//треугольник
	Triangle tr;
	cout << "...At the begining..." << endl;
	cout << tr << endl;
	cout << "1)...Scaling...and...Color setting..." << endl;
	tr.scale(2);
	tr.setColour({ 255, 0, 0 });
	cout << tr << endl;
	cout << "...Rotation..." << endl;
	tr.rotateAboutPoint(180, { 2,0 } );
	cout << tr << endl;
	cout << "...Moving..." << endl;
	tr.move({ 3,3 });
	cout << tr << endl;
	*/

	/*
	//эллипс
	Ellipse el;
	cout << "...At the begining..." << endl;
	cout << el << endl;
	cout << "1)...Scaling...and...Color setting..." << endl;
	el.scale(2);
	el.setColour({ 255, 0, 0 });
	cout << el << endl;
	cout << "...Rotation..." << endl;
	el.rotateAboutPoint(180, { 5,0 });
	//el.rotateAboutPoint(90, { 4,0 });
	cout << el << endl;
	cout << "...Moving..." << endl;
	el.move({ 3,3 });
	cout << el << endl;
	*/

	/*
	//шестиугольник
	Hexagon hex;
	cout << "...At the begining..." << endl;
	cout << hex << endl;
	cout << "1)...Scaling...and...Color setting..." << endl;
	hex.scale(2);
	hex.setColour({ 255, 0, 0 });
	cout << hex << endl;
	cout << "...Rotation..." << endl;
	hex.rotateAboutPoint(180, { 3,0 });
	//hex.rotateAboutPoint(90, { 3,0 });
	cout << hex << endl;
	cout << "...Moving..." << endl;
	hex.move({ 3,3 });
	cout << hex << endl;
	*/

	char c;
	cout << endl << "............................." << endl << "Press any key to exit" << endl;
	cin >> c;
	return 0;
}