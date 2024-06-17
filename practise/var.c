// creating variables

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* when you create a variable in c you have to specify the type of info you will store in the variable
    in order to store multiple characters in a variable we have to include square brackets after the name of variable []  */
    char name[] = "Aaron";         // variable storing multiple characters
    int age = 20;                  // variable storing integer 20

    printf("There once was a man named %s\n", name);  // %s is a placeholder for a string 
    printf("He was %d years old.\n", age);          // %d is a placeholder for a interger
    printf("He really liked the name %s\n", name);
    printf("But he did not like being %d.\n", age);

    return 0;

}