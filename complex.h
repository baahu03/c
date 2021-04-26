typedef struct{
        int real;
        int imaginary;
}complex;
typedef enum { addc=1, subtractc, conjugatec, multiplicationc } operation;
void getcomplex(complex *,int);
complex * add(complex, complex, complex *);
complex * sub(complex, complex, complex *);
complex * conjugate(complex, complex*);
int multiply(complex, complex);
void display(complex* );
