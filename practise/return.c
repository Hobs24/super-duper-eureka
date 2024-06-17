// Working with Return Statements

#include <stdio.h>
#include <stdlib.h>
// then you define a function that returns a value, you will have to place it above where it will be called
// function cube() that cubes a number

double cube(double num){
    double result = num * num * num;
    return result;    //return keyword breaks you out of the function and return the value of results
} 

int main()
{
    printf("Answer: %f", cube(3.0));

    return 0;
}