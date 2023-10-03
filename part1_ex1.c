#include <stdio.h>

int main(){
int i;
int p;

printf("Introduza um inteiro: ");

scanf("%d",&i);

//printf("O numero que escolhido e %d\n", i);

printf("Introduza a posicao do bit que quer: ");
scanf("%d",&p);

if (((1<<p)&i)==0)
 printf("O bit e zero \n");
else 
 printf("O bit e um \n");

return 0;

}
