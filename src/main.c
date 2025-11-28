#include <stdio.h>
#include "../include/element.h"

int main() {
    int choice;
    printf("Welcome to the Modern Periodic Table!\n");

    while (1) {
        printf("\n=============================\n");
        printf("     Modern Periodic Table    \n");
        printf("=============================\n");
        printf("1. Search by Atomic Number\n");
        printf("2. Search by Name or Symbol\n");
        printf("3. List all elements\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        if (choice == 1) {
            int num;
            printf("Enter atomic number (1-118): ");
            scanf("%d", &num);
            getchar();

            if (!searchByAtomicNumber(num)) {
                printf("No element found with atomic number %d\n", num);
            }
        } else if (choice == 2) {
            char input[50];
            printf("Enter element name or symbol: ");
            fgets(input, sizeof(input), stdin);
            input[strcspn(input, "\n")] = 0;

            if (!searchByNameOrSymbol(input)) {
                printf("No element found with name or symbol '%s'\n", input);
            }
        } else if (choice == 3) {
            listAllElements();
        } else if (choice == 4) {
            printf("Thank you for using the Modern Periodic Table. Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Please enter 1 to 4.\n");
        }
    }
    return 0;
}
