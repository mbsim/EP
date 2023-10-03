#include <stdio.h>
#include <stdbool.h>
#include <ctype.h> // Include ctype.h for isdigit function
#include <string.h> // Include string.h for strlen function
#include <stdlib.h> // Include stdlib.h for atoi function

/*
    Implement a C program, print_bit, that reads an integer, i, from the keyboard and a bit position, p, and prints the corresponding 
    value of that bit in the binary representation of i. Note:
    consider that p = 0 corresponds to the position of the least significant bit.
*/

/*Então, basicamente, a função print_bit retorna o valor do bit na posição p da representação binária 
do número inteiro i. Se o bit for 1, a função retornará 1; se for 0, a função retornará 0.
*/

int print_bit(int i, int p)             // (i >> p) -> os bits em i serão deslocados para a direita em p posições. 
{                                       // (& 1) -> O operador & compara cada bit em i >> p com o bit 1, 
                                        //          retornando 1 se ambos os bits forem 1 e 0 caso contrário.
    return (i >> p) & 1;
}

// Function to check if a string contains only digits

bool isInteger(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++)     // começa a percorrer a string a partir do primeiro caractere (índice 0) e continua até encontrar o caractere nulo '\0', que marca o final da string.
    {
        if (str[i] < '0' || str[i] > '9')   //If que percorre o ponteiro a procura de possiveis numeros acima de 9 e inferior a 0
        {
            return false;   // Se a função encontrar um caractere que não seja um dígito numérico 
                            //durante a iteração, ela retorna false
        }                  
    }
    return true;        // Se a função nao encontrar caracteres entao devolve true
}

int main(void)
{
    int i, p;
    char input[100]; // DECLARACAO DE UM ARRAY QUE GUARDA ATE 100 CARACTERES

    printf("Enter an integer: ");

    while (1)
    {
        if (fgets(input, sizeof(input), stdin) == NULL)     // verifica se a operação de leitura foi bem-sucedida
        {
            printf("Error reading input.\n");
            return 1;
        }

        // Remove trailing newline if present.
        // O objetivo desse código é eliminar o caractere de nova linha ('\n') do final da string input.

        if (input[strlen(input) - 1] == '\n')
        {
            input[strlen(input) - 1] = '\0';
        }

        if (!isInteger(input))
        {
            printf("Invalid input. Please enter an integer: ");
            continue;
        }

        i = atoi(input); // Convert the input string to an integer

        if (i < 0)
        {
            printf("The number cannot be negative. Enter a non-negative number: ");
        }

        
        else
        {
            break;
        }
    }

    printf("Enter a bit position: ");

    while (1)
    {
        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            printf("Error reading input.\n");
            return 1;
        }

        // Remove trailing newline if present
        if (input[strlen(input) - 1] == '\n')
        {
            input[strlen(input) - 1] = '\0';
        }

        if (!isInteger(input))
        {
            printf("Invalid input. Please enter a valid bit position: ");
            continue;
        }

        p = atoi(input); // Convert the input string to an integer

        if (p < 0)
        {
            printf("Bit position cannot be negative. Enter a non-negative bit position: ");
        }
        else
        {
            break;
        }
    }

    int bitValue = print_bit(i, p);
    printf("The bit at position %d of %d is %d\n", p, i, bitValue);

    return 0;
}

