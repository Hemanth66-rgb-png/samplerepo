#include "functionthree.h"
#include <stdio.h>

void dbCall() {
    printf("Simulated database call\n");
}

void serviceCall(int value) {
    if (value > 10) {
        printf("Service call made for value greater than 10.\n");
    } else {
        printf("Service call made for value 10 or less.\n");
    }
}