#include "functionone.h"
#include "functionthree.h"
#include "functiontwo.h"  
#include <stdio.h>
#include <string.h>

void useFile1AndFile3() {
   double angle=M_PI/3;
   double sineValue=calculateSine(angle);
   printf("The sine of %.2f radians is:  %.2f\n", angle,sineValue);

    struct Person person1;
    strcpy(person1.name, "Alice");
    person1.age = 28;
    strcpy(person1.address, "456 Elm Street, Boston");

    printPerson(person1);
    dbCall();
    serviceCall(result);
}

void simpleFunctionFromFile2() {
    printf("This is a simple function from file2.c\n");
}

int main() {
    useFile1AndFile3();
    return 0;
}