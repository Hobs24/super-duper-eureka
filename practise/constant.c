// creating a constant 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //A constant is a special type of variable in C that cant't be modified or changed 
    /* i.e of variable being modified) 
    int num = 5;
    printf("%d\n", num);
    num = 8;                here num is being modified to the value 8
    printf("%d", num)*/


    const int num = 5;  //const is a keyword that makes the variable a constant
    printf("%d\n", num);
    num = 8;               // now this modifiction will result in a error becaution num is a constant 
    printf("%d", num);
    
    return 0;
}