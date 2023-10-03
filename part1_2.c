#include <stdio.h>

int main(){

//int vetor_bin[];

int i=0;
int p=0;


// garantir que o i é um NUMERO e que é INTEIRO, caso contrario dizer que o numero colocado esta incorreto

printf("Introduza um inteiro: ");

scanf("%d",&i);

while(i<0 && i>1000000){

printf("ERRO! Tem de introduzir um numero valido: ");

printf("Tente outra vez: ");

scanf("%d",&i);

}

printf("O numero que escolheu foi: %d\n", i);

printf("Introduza a posicao do bit que quer: ");

scanf("%d",&p);


if (((1<<p)&i)==0)
 printf("O bit e zero \n");
else 
 printf("O bit e um \n");

 

return 0;

}
