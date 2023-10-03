#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){    //argc é o numero de argumentos que é colocado no terminal

    int sum = 0;
    int n;

    for(n =1 ; n<argc ; n++)

    sum = sum + atoi(argv[n]);

    printf("O numero de argumentos e: %d\n", sum);
    


return 0;

}
