//Working with Structs- a data structure

#include <stdio.h>
#include <stdlib.h>

struct Students
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};


int main(){

    struct Students student1;              // A container that can store multiple datatypes
    student1.age = 21;
    student1.gpa = 3.2;
    strcpy(student1.name, "Aaron");       //strcpy(string copy function) takes a string and give it a value you assign
    strcpy(student1.major, "Physics");


    struct Students student2;              // A container that can store multiple datatypes
    student2.age = 24;
    student2.gpa = 3.4;
    strcpy(student2.name, "Thomas");       //strcpy(string copy function) takes a string and give it a value you assign
    strcpy(student2.major, "Mathematics");

    printf("%s", student2.name);

    return 0;
    
}