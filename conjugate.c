#include "complex.h"
complex * conjugate(complex c1, complex *result){
	result->real=c1.real;
	result->imaginary=-1*c1.imaginary;
	return result;
}
