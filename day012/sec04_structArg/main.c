#include <stdio.h>

typedef struct _complex
{
    float real;
    float image;

} Complex;

Complex addComplex(Complex x, Complex y)
{
    Complex t;
    t.real = x.real + y.real;
    t.image = x.image + y.image; 
    return t;

    // parameters are passed by pass
    /*
    x.real += y.real;
    x.image += y.image;
    return x;
    */
}

int main1()
{
    Complex c1 = {1.0, 2.0};
    Complex c2 = {3.0, 4.0};
    Complex c3 = addComplex(c1, c2);

    printf("(%.2f, %.2f)\n", c3.real, c3.image);

    return 0;
}

Complex addComplexByPointer(Complex *x, Complex *y)
{
    Complex t;
    t.real = x->real + y->real;
    t.image = x->image + y->image;
    return t;
}

int main()
{
    Complex c1 = {1.0, 2.0};
    Complex c2 = {3.0, 4.0};
    Complex c3 = addComplexByPointer(&c1, &c2);

    printf("(%.2f, %.2f)\n", c3.real, c3.image);

    return 0;
}