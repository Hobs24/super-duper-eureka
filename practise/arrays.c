

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //An array is a data structure where you could store different data values 

    int luckyNumbers[] = {4, 3, 27, 13, 65, 71};
    // changing value in an array
    luckyNumbers[1] = 12;

    printf("%d", luckyNumbers[1]);  // getting specific number in array according to index position

    return 0;
}