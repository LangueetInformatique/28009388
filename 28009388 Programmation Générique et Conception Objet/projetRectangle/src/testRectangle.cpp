/*
 * testRectangle.cpp
 *
 *  Created on: 8 avr. 2021
 *      Author: soniabensmail
 */
#include "Rectangle.h"
#include <iostream>

using namespace std;

int main(){
	Rectangle<double> monRectangle(1.0, 3.0, 4.0, 1.0);
	cout<<"Surface = "<<monRectangle.surface() << endl;
	//cout <<monRectangle.estContenu(3,4) <<endl;
	return 0;
}
