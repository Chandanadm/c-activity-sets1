#include <stdio.h>
struct _complex {float real;float imaginary; };
typedef struct _complex Complex; 
Complex input_complex(); 
Complex add_complex(Complex a, Complex b); 
void output(Complex a, Complex b, Complex sum);


int main()
{
    Complex a, b, sum;
    printf("Enter the first complex number:\n");
    a = input_complex();
    printf("Enter the second complex number:\n");
    b = input_complex();
    sum = add_complex(a,b);
    output(a,b,sum);
    return 0;
}

Complex input_complex() 
{
    Complex comp;
    printf("Enter real part: ");  
    scanf("%f", &comp.real);
    printf("Enter imaginary part: ");
    scanf("%f", &comp.imaginary);
    return comp;
}

Complex add_complex(Complex a, Complex b) 
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) 
{
    printf("The sum of %.1f + %.1fi and %.1f + %.1fi is %.1f + %.1fi",a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary); 
}
