// Working with numbers

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("%f\n", 5.8 + 4.3); // using %f to do an operations or in place in variable
    printf("%f\n", pow(2, 3)); // pow() is a function that does power operations i.e) pow(2, 3) = 2^3 = 8
    printf("%f\n", sqrt(36)); // sqrt() is a function that squares a number i.e) sqrt(36) = 6
    printf("%f\n", ceil(36.342)); // ceil() is a function that gives the next highest whole number  i.e) ceil(36.356) = 37
    printf("%f\n", floor(36.56)); // floor() is a function that round up a number  i.e) floor(36.56) = 36
    
    return 0;
}