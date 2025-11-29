#ifndef ELEMENT_H
#define ELEMENT_H

typedef struct {
    int Atomic_Number;
    char Name[20];
    char Symbol[3];
    char Electro_Config[50];
} Element;

void printElementInfo(Element E);
int searchByAtomicNumber(int number);
int searchByNameOrSymbol(char input[]);
void listAllElements();

#endif
