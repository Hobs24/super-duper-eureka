// Making a better calculator

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //variable to store number entered by user and operator
    double num1;
    double num2;
    char oper;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &oper);                           //always leave a placespace when you want to get an operator after %c when using scanf()
    printf("Enter a number: ");
    scanf("%lf", &num2);
    
    if(oper == '+'){
        printf("%f", num1 + num2);
    } else if(oper == '-'){
        printf("%f", num1 - num2);
    } else if(oper == '/'){
        printf("%f", num1 / num2);
    } else if(oper == '*'){
        printf("%f", num1 * num2);
    } else{
        printf("Invalid Operator\n");
    } 

    
    return 0;
}