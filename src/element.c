#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../include/element.h"

Element periodicTable[118] = {
    {1, "Hydrogen", "H", "1s1"},
    {2, "Helium", "He", "1s2"},
    {3, "Lithium", "Li", "[He] 2s1"},
    {4, "Beryllium", "Be", "[He] 2s2"},
    {5, "Boron", "B", "[He] 2s2 2p1"},
    {6, "Carbon", "C", "[He] 2s2 2p2"},
    {7, "Nitrogen", "N", "[He] 2s2 2p3"},
    {8, "Oxygen", "O", "[He] 2s2 2p4"},
    {9, "Fluorine", "F", "[He] 2s2 2p5"},
    {10, "Neon", "Ne", "[He] 2s2 2p6"},
    /* include all other elements similarly */
    {118, "Oganesson", "Og", "[Rn] 5f14 6d10 7s2 7p6"}
};

void printElementInfo(Element e) {
    printf("\n------------------------------\n");
    printf("Element Name     : %s\n", e.name);
    printf("Symbol           : %s\n", e.symbol);
    printf("Atomic Number    : %d\n", e.atomicNumber);
    printf("Electron Config. : %s\n", e.electronConfig);
    printf("------------------------------\n");
}

int searchByAtomicNumber(int number) {
    for (int i = 0; i < 118; i++) {
        if (periodicTable[i].atomicNumber == number) {
            printElementInfo(periodicTable[i]);
            return 1;
        }
    }
    return 0;
}

int strCaseCmp(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        if (tolower(*s1) != tolower(*s2))
            return tolower(*s1) - tolower(*s2);
        s1++;
        s2++;
    }
    return tolower(*s1) - tolower(*s2);
}

int searchByNameOrSymbol(char input[]) {
    for (int i = 0; i < 118; i++) {
        if (strCaseCmp(input, periodicTable[i].name) == 0 || strCaseCmp(input, periodicTable[i].symbol) == 0) {
            printElementInfo(periodicTable[i]);
            return 1;
        }
    }
    return 0;
}

void listAllElements() {
    printf("\nList of Elements (Atomic Number : Symbol - Name):\n");
    for (int i = 0; i < 118; i++) {
        printf("%3d : %3s - %s\n", periodicTable[i].atomicNumber, periodicTable[i].symbol, periodicTable[i].name);
    }
}
