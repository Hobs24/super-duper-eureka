// basic mad libs game

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char colour[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter a colour: ");
    scanf("%s", colour);
    printf("Enter a plural-noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity : ");
    scanf("%s", celebrity);

    printf("Roses are %s\n", colour);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n", celebrity);


    return 0;
}