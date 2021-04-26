#include "complex.h"
complex * sub(complex c1,complex c2, complex * result){
	result->real = c1.real-c2.real;
	result->imaginary=c1.imaginary-c2.imaginary;
	return result;
}
