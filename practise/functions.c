// WOrking with functions 

#include <stdio.h>
#include <stdlib.h>

int main()
{

    sayHi("Thomas", 18);   // calling the function inside main functions

    return 0;
}
// creating a function , give the return type and name of function

void sayHi(char name[], int age[])
{
    printf("Hello %s,  you are %d years old", name, age);
}
