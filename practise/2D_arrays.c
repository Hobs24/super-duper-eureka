//2D arrays and Nested Loops

#include <stdio.h>
#include <stdlib.h>

int main(){
    //2D arrays
    //you make two square brackets[][] for 2D arrays that represent the width and height of the array
    //the first square bracket you must write the number elements in the nums arrays which is 3
    //the second square bracket write the number of elements in each element of the array which is 2 
    int nums[3][2] = {
                    {1,2},                         //arrays within an array
                    {3,4},
                    {5,6}

                    };
    // Accessing info from an 2D array
    printf("%d\n", nums[2][1]);
    return 0;
}