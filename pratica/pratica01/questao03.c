//3.Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>

int main(){
const float PI = 3.1416;
float p;
int r;

printf("entre com o raio da pizza: ");
scanf("%i", &r);
  
p = (2 * PI * r);

printf("O perimetro da pizza é: %0.2f\n", p);

  return 0;
}