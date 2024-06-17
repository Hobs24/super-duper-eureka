//Working with pointers 
// A pointer in a  memory address which is a type of data
#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 30;
    int * pAge =&age;      //greating a pointer variable that stores the memeory address of age
    double gpa = 3.3;
    char grade = 'A';


    printf("age's memory address: %p\n", &age);

    return 0;
}