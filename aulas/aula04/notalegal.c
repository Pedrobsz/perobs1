#include <stdio.h>

int main(){
char nome[31];
int qtd;
float valor;
  
  printf("entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);
 
  printf("entre com a qtde do produto: ");
  deu_certo = scanf("%i", &qtd);
  
  printf("entre com o valor do produto: ");
  deu_certo = scanf("%f", &valor);

  printf("--------------------------\n");
  printf("    N O T A L E G A L    \n");
  printf("--------------------------\n");
  printf("ITEM         QTD   VALOR  \n");
  printf("%-12s %03i %7.2f\n",nome, qtd, valor);

  return 0;
}