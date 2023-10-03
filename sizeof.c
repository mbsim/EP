#include <stdio.h>

int main() {
    printf("Tamanho de int: %zu bytes\n", sizeof(int));
    printf("Tamanho de float: %zu bytes\n", sizeof(float));
    printf("Tamanho de char: %zu bytes\n", sizeof(char));
    int x = 42;
    printf("Tamanho de x: %zu bytes\n", sizeof(x));

    float array[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    printf("Tamanho do array: %zu bytes\n", sizeof(array));

    return 0;
}