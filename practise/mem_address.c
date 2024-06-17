//Dealig with Memory Addresses

#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30;      //the value 30 is stored in a computer
    double gpa = 3.4;
    char grade = 'A';

    // printing out memeory addresses of variable
    printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

    return 0;

}