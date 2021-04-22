//============================================================================
// Name        : projetRectangle.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================#include
#include <stdlib.h>

template <typename T>
class Rectangle{
public:
	T surface() const;
	bool estContenu(T x, T y) const;
	Rectangle(T x_a, T y_a, T x_b, T y_b);

private:
	T x_a;
	T y_a;
	T x_b;
	T y_b;

};

template <typename T>

Rectangle <T> :: Rectangle (T x_a, T y_a, T x_b, T y_b){
	this->x_a = x_a;
	this->y_b = y_b;
	this->x_a = x_a;
	this->y_b = y_b;


}

template <typename T>
T Rectangle<T> :: surface() const{
	T surface = (y_a-y_b)*(x_a-x_b);
	surface = abs(surface);
	return surface;
}



