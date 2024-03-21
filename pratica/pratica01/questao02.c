/*
2.Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.
*/
#include <stdio.h>

int main(){
  int base = 0;
  int altura = 0;
  printf("entre com a base: ");
  scanf("%i", &base);

  printf("entre com a altura: ");
  scanf("%i", &altura);
  int a = base * altura /2;

  printf("a area do triangulo é: %i\n" , a);


  return 0;
}