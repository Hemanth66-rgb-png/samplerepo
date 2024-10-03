#include "functionone.h"
#include "functionthree.h"
#include "functiontwo.h"  
#include <stdio.h>
#include <string.h>

void MainLogic() {
    
    double angle = M_PI / 3;  
    double sineValue = calculateSine(angle);
    printf("The sine of %.2f radians is: %.2f\n", angle, sineValue);

    struct Person person2;
    strcpy(person2.name, "Hemanth");
    person2.age = 35;
    strcpy(person2.address, "visakhapatnam,AndhraPradesh");

    printPerson(person2);

    useFile1AndFile3();  
    simpleFunctionFromFile2();  
}

int main() {
    MainLogic();  
    return 0;
}