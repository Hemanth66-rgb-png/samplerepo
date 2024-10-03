#include "functionone.h"
#include <stdio.h>
#include<math.h>
#include <string.h>


double calculateSine(double angle) {
    return sin(angle);
}
void printPerson(struct Person p) {
    printf("Person Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Address: %s\n", p.address);
}