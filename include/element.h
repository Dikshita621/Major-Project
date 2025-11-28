#ifndef ELEMENT_H
#define ELEMENT_H

typedef struct {
    int atomicNumber;
    char name[20];
    char symbol[3];
    char electronConfig[50];
} Element;

void printElementInfo(Element e);
int searchByAtomicNumber(int number);
int searchByNameOrSymbol(char input[]);
void listAllElements();

#endif
