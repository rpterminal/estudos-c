#include <stdio.h>

int main() {
    int intVar = 16;
    char charVar = 'y';
    long longVar = 32;
    long long llongVar = 32;
    double doubleVar = 64.16;
    long double ldoubleVar = 64.16;

    printf("\n %u\n %u\n %u\n %u\n %u\n %u\n", sizeof(intVar), sizeof(charVar), sizeof(longVar), sizeof(llongVar), sizeof(doubleVar), sizeof(ldoubleVar));

    return 0;
}