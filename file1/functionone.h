#ifndef FUNCTIONONE_H
#define FUNCTIONONE_H

struct Person {
    char name[50];
    int age;
    char address[100];
};

int calculateSine(double angle);
void printPerson(struct Person p);

#endif
