// getting user input
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*in scanf() you can put:
    %d to get an integer 
    %lf to get a double ie) 3.4 
    %c to get a character
    scanf() returns input up to the first blank space
    */
    int age;   // creating a variable without giving it a value
    printf("Enter yuor age: ");
    scanf("%d", &age);  // scanf() allows user to enter in  value, & is a pointer that stores input
    printf("You are %d years old\n", age);

    /* its different when getting a string input i.e)
    you will have to specify how large the string or set of characters should be before hand if you won't will it a value straight ahead
    char name[20];
    printf("Enter your name: "):
    scanf("%s", name);
    printf("Your name is %s", name)
    */

   /*
   To get multiple input in a line include blank places we use another function called fgets() i.e)
   char name[20];
    printf("Enter your name: "):
    fgets(name, 20, stdin);    20 specifies the limit the user can enter and stdin (standard input) is where we want to get the input
    printf("Your name is %s", name
   */
    return 0;
}