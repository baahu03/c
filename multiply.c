#include "complex.h"

int multiply(complex c1, complex c2 ){
	return c1.real*c2.real-c2.imaginary*c1.imaginary;
}

