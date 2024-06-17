//Working with if statements

#include <stdio.h>
#include <stdlib.h>

// function max() returns the largest number
int max(int num1, int num2, int num3){
    int result;
   if(num1 >= num2 && num1 >= num3){             //&& stands for (and) allow you to add another argument
    result = num1;                               // || stands for (or)
   } else if(num2 >= num1 && num2 >= num3){
    result = num2;
   } else {
    result = num3;
   }
    return result;
}

int main(){

    printf("%d\n", max(4, 10, 34));

    return 0;
}