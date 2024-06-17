// Using Switch statements to compare values

#include <stdio.h>
#include <stdlib.h>

int main(){
    // comparing grade to different results
    char grade = 'A';

    switch (grade){
       
        case 'A' :
            printf("You did grear! ");
            break;
         case 'B' :
            printf("You did alright! ");
            break;
        case 'C' :
            printf("You did poorly! ");
            break;
        case 'D' :
            printf("You did very bad! ");
            break;
        case 'F' :
            printf("You Failed! ");
            break;
        default :
        printf("Invalid grade");
    }
    

    return 0;

}