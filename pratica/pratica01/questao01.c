//1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
#include <stdio.h>

int main(){

float a1;
float a2;

printf("entre com a nota da p1: ");
scanf("%f", &a1);
printf("entre com a nota da p2: ");
scanf("%f", &a2);

float media = (a1 * 0.4) + (a2 * 0.6);

printf("a media final é: %0.2f\n", media);
  return 0;
}