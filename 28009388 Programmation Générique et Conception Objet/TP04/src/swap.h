#ifndef SWAP_H_
#define SWAP_H_

#include "Date.h"

template <typename T>
	void swap(T* a, T* b){
	T c;
	c = *a;
	*a = *b;
	*b = c;
}

template <typename T>
	void swap1(T& a, T& b){
	T c;
	c = a;
	a = b;
	b = c;
}


#endif /* SWAP_H_ */
