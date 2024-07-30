In C, mathematical functions are provided by the <math.h> library. These functions allow you to perform a variety of mathematical operations ranging from basic arithmetic to more complex computations. Here’s a list of commonly used math functions in C, along with examples, explanations, and expected outputs:
======================================================================================
1. abs()
Computes the absolute value of an integer.

Example Code:


#include <stdio.h>
#include <stdlib.h>  // For abs()

int main() {
    int number = -10;
    int result = abs(number);

    printf("The absolute value of %d is %d\n", number, result);

    return 0;
}
Explanation:

abs() takes an integer and returns its absolute value.
For -10, the result is 10.


Expected Output:

The absolute value of -10 is 10

======================================================================================
2. sqrt()
Computes the square root of a number.

Example Code:


#include <stdio.h>
#include <math.h>  // For sqrt()

int main() {
    double number = 25.0;
    double result = sqrt(number);

    printf("The square root of %.2f is %.2f\n", number, result);

    return 0;
}


Explanation:

sqrt() takes a non-negative double and returns its square root.
For 25.0, the result is 5.0.


Expected Output:


The square root of 25.00 is 5.00

======================================================================================
3. pow()
Computes the power of a number (exponential function).

Example Code:

#include <stdio.h>
#include <math.h>  // For pow()

int main() {
    double base = 2.0;
    double exponent = 3.0;
    double result = pow(base, exponent);

    printf("%.2f raised to the power of %.2f is %.2f\n", base, exponent, result);

    return 0;
}

Explanation:

pow() takes two doubles, base and exponent, and returns base raised to the power of exponent.
For 2.0^3.0, the result is 8.0.


Expected Output:


2.00 raised to the power of 3.00 is 8.00

======================================================================================
4. exp()
Computes the exponential of a number.

Example Code:

#include <stdio.h>
#include <math.h>  // For exp()

int main() {
    double value = 1.0;
    double result = exp(value);

    printf("The exponential of %.2f is %.2f\n", value, result);

    return 0;
}


Explanation:

exp() computes e^value, where e is the base of natural logarithms.
For 1.0, the result is approximately 2.71828.


Expected Output:



The exponential of 1.00 is 2.72

======================================================================================
5. log()
Computes the natural logarithm (base e) of a number.

Example Code:


#include <stdio.h>
#include <math.h>  // For log()

int main() {
    double value = 10.0;
    double result = log(value);

    printf("The natural logarithm of %.2f is %.2f\n", value, result);

    return 0;
}


Explanation:

log() computes the natural logarithm of a positive double.
For 10.0, the result is approximately 2.30259.


Expected Output:

The natural logarithm of 10.00 is 2.30


======================================================================================
6. log10()
Computes the base-10 logarithm of a number.

Example Code:


#include <stdio.h>
#include <math.h>  // For log10()

int main() {
    double value = 100.0;
    double result = log10(value);

    printf("The base-10 logarithm of %.2f is %.2f\n", value, result);

    return 0;
}


Explanation:

log10() computes the logarithm of a number with base 10.
For 100.0, the result is 2.0.


Expected Output:



The base-10 logarithm of 100.00 is 2.00


======================================================================================
7. ceil()
Computes the smallest integer value greater than or equal to a number.

Example Code:


#include <stdio.h>
#include <math.h>  // For ceil()

int main() {
    double value = 2.3;
    double result = ceil(value);

    printf("The ceiling of %.2f is %.2f\n", value, result);

    return 0;
}


Explanation:

ceil() rounds up to the nearest integer greater than or equal to the input.
For 2.3, the result is 3.0.


Expected Output:



The ceiling of 2.30 is 3.00

======================================================================================
8. floor()
Computes the largest integer value less than or equal to a number.

Example Code:

#include <stdio.h>
#include <math.h>  // For floor()

int main() {
    double value = 2.7;
    double result = floor(value);

    printf("The floor of %.2f is %.2f\n", value, result);

    return 0;
}


Explanation:

floor() rounds down to the nearest integer less than or equal to the input.
For 2.7, the result is 2.0.


Expected Output:

The floor of 2.70 is 2.00

======================================================================================
9. fabs()
Computes the absolute value of a floating-point number.

Example Code:


#include <stdio.h>
#include <math.h>  // For fabs()

int main() {
    double value = -3.5;
    double result = fabs(value);

    printf("The absolute value of %.2f is %.2f\n", value, result);

    return 0;
}


Explanation:

fabs() returns the absolute value of a floating-point number.
For -3.5, the result is 3.5.



Expected Output:

The absolute value of -3.50 is 3.50


======================================================================================
10. fmod()
Computes the floating-point remainder of the division of two numbers.

Example Code:


#include <stdio.h>
#include <math.h>  // For fmod()

int main() {
    double dividend = 7.5;
    double divisor = 2.2;
    double result = fmod(dividend, divisor);

    printf("The remainder of %.2f divided by %.2f is %.2f\n", dividend, divisor, result);

    return 0;
}

Explanation:

fmod() returns the remainder of the division of dividend by divisor.
For 7.5 / 2.2, the remainder is approximately 1.1.


Expected Output:



The remainder of 7.50 divided by 2.20 is 1.10



there are additional mathematical functions in C beyond the ones previously mentioned. These functions cover a range of mathematical operations, including trigonometric functions, hyperbolic functions, and more. Here are some additional mathematical functions provided by the <math.h> library in C, along with examples and explanations:

======================================================================================
1. sin()
Computes the sine of an angle (in radians).

Example Code:


#include <stdio.h>
#include <math.h>  // For sin()

int main() {
    double angle = M_PI / 6;  // 30 degrees in radians
    double result = sin(angle);

    printf("The sine of %.2f radians is %.2f\n", angle, result);

    return 0;
}


Explanation:

sin() computes the sine of an angle given in radians.
M_PI / 6 is the radian equivalent of 30 degrees.
For M_PI / 6, the result is approximately 0.5.
Expected Output:



The sine of 0.52 radians is 0.50

======================================================================================
2. cos()
Computes the cosine of an angle (in radians).

Example Code:



#include <stdio.h>
#include <math.h>  // For cos()

int main() {
    double angle = M_PI / 3;  // 60 degrees in radians
    double result = cos(angle);

    printf("The cosine of %.2f radians is %.2f\n", angle, result);

    return 0;
}


Explanation:

cos() computes the cosine of an angle given in radians.
M_PI / 3 is the radian equivalent of 60 degrees.
For M_PI / 3, the result is approximately 0.5.



Expected Output:

The cosine of 1.05 radians is 0.50

======================================================================================
3. tan()
Computes the tangent of an angle (in radians).

Example Code:


#include <stdio.h>
#include <math.h>  // For tan()

int main() {
    double angle = M_PI / 4;  // 45 degrees in radians
    double result = tan(angle);

    printf("The tangent of %.2f radians is %.2f\n", angle, result);

    return 0;
}


Explanation:

tan() computes the tangent of an angle given in radians.
M_PI / 4 is the radian equivalent of 45 degrees.
For M_PI / 4, the result is approximately 1.0.


Expected Output:

The tangent of 0.79 radians is 1.00


======================================================================================
4. asin()
Computes the arcsine (inverse sine) of a value, returning the angle in radians.

Example Code:


#include <stdio.h>
#include <math.h>  // For asin()

int main() {
    double value = 0.5;
    double result = asin(value);

    printf("The arcsine of %.2f is %.2f radians\n", value, result);

    return 0;
}


Explanation:

asin() computes the arcsine of a value, returning the angle in radians.
For 0.5, the result is approximately 0.5236 radians (30 degrees).



Expected Output:

The arcsine of 0.50 is 0.52 radians

======================================================================================
5. acos()
Computes the arccosine (inverse cosine) of a value, returning the angle in radians.

Example Code:


#include <stdio.h>
#include <math.h>  // For acos()

int main() {
    double value = 0.5;
    double result = acos(value);

    printf("The arccosine of %.2f is %.2f radians\n", value, result);

    return 0;
}


Explanation:

acos() computes the arccosine of a value, returning the angle in radians.
For 0.5, the result is approximately 1.0472 radians (60 degrees).



Expected Output:

The arccosine of 0.50 is 1.05 radians

======================================================================================
6. atan()
Computes the arctangent (inverse tangent) of a value, returning the angle in radians.

Example Code:



#include <stdio.h>
#include <math.h>  // For atan()

int main() {
    double value = 1.0;
    double result = atan(value);

    printf("The arctangent of %.2f is %.2f radians\n", value, result);

    return 0;
}


Explanation:

atan() computes the arctangent of a value, returning the angle in radians.
For 1.0, the result is approximately 0.7854 radians (45 degrees).



Expected Output:

The arctangent of 1.00 is 0.79 radians

======================================================================================
7. sinh()
Computes the hyperbolic sine of a number.

Example Code:

#include <stdio.h>
#include <math.h>  // For sinh()

int main() {
    double value = 1.0;
    double result = sinh(value);

    printf("The hyperbolic sine of %.2f is %.2f\n", value, result);

    return 0;
}


Explanation:

sinh() computes the hyperbolic sine of a number.
For 1.0, the result is approximately 1.1752.


Expected Output:

The hyperbolic sine of 1.00 is 1.18


======================================================================================
8. cosh()
Computes the hyperbolic cosine of a number.

Example Code:



#include <stdio.h>
#include <math.h>  // For cosh()

int main() {
    double value = 1.0;
    double result = cosh(value);

    printf("The hyperbolic cosine of %.2f is %.2f\n", value, result);

    return 0;
}


Explanation:

cosh() computes the hyperbolic cosine of a number.
For 1.0, the result is approximately 1.5431.


Expected Output:

The hyperbolic cosine of 1.00 is 1.54


======================================================================================
9. tanh()
Computes the hyperbolic tangent of a number.

Example Code:


#include <stdio.h>
#include <math.h>  // For tanh()

int main() {
    double value = 1.0;
    double result = tanh(value);

    printf("The hyperbolic tangent of %.2f is %.2f\n", value, result);

    return 0;
}


Explanation:

tanh() computes the hyperbolic tangent of a number.
For 1.0, the result is approximately 0.7616.



Expected Output:



The hyperbolic tangent of 1.00 is 0.76

======================================================================================
10. fmin()
Computes the minimum of two floating-point numbers.

Example Code:


#include <stdio.h>
#include <math.h>  // For fmin()

int main() {
    double x = 2.5;
    double y = 3.5;
    double result = fmin(x, y);

    printf("The minimum of %.2f and %.2f is %.2f\n", x, y, result);

    return 0;
}

Explanation:

fmin() returns the smaller of two floating-point numbers.
For 2.5 and 3.5, the result is 2.5.


Expected Output:

The minimum of 2.50 and 3.50 is 2.50

======================================================================================
11. fmax()
Computes the maximum of two floating-point numbers.



Example Code:


#include <stdio.h>
#include <math.h>  // For fmax()

int main() {
    double x = 2.5;
    double y = 3.5;
    double result = fmax(x, y);

    printf("The maximum of %.2f and %.2f is %.2f\n", x, y, result);

    return 0;
}


Explanation:

fmax() returns the larger of two floating-point numbers.

For 2.5 and 3.5, the result is 3.5.



Expected Output:

The maximum of 2.50 and 3.50 is 3.50


======================================================================================

12. frexp()
Breaks a floating-point number into its binary significand (mantissa) and exponent.

Example Code:


#include <stdio.h>
#include <math.h>  // For frexp()

int main() {
    double value = 12.34;
    int exponent;
    double significand = frexp(value, &exponent);

    printf("The significand of %.2f is %.2f and the exponent is %d\n", value, significand, exponent);

    return 0;
}
Explanation:

frexp() breaks down a floating-point number into its normalized significand and exponent.
For 12.34, the significand is approximately 0.7675 and the exponent is 4.


Expected Output:

The significand of 12.34 is 0.77 and the exponent is 4


======================================================================================
13. ldexp()
Computes the value of a floating-point number multiplied by 2 raised to the power of an integer.

Example Code:



#include <stdio.h>
#include <math.h>  // For ldexp()

int main() {
    double significand = 0.7675;
    int exponent = 4;
    double result = ldexp(significand, exponent);

    printf("The value of %.4f * 2^%d is %.2f\n", significand, exponent, result);

    return 0;
}
Explanation:

ldexp() calculates significand * (2^exponent).
For 0.7675 * 2^4, the result is approximately 12.34.



Expected Output:

The value of 0.7675 * 2^4 is 12.34
