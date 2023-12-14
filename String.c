#include <stdio.h>
#include <string.h>

int main() {
    char string1[20] = "Olá, ";
    char string2[] = "Mundo!";

    // Concatenando strings
    strcat(string1, string2);

    // Comprimento da string resultante
    int comprimento = strlen(string1);

    printf("Concatenação: %s\n", string1);
    printf("Comprimento: %d\n", comprimento);

    return 0;
}
