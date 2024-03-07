/*
  Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.
*/

#include <stdio.h>

int main(){

  float pfinal = 0;
  float pinicial = 0;
  
  const float ICMS = 0.17f;
  const float COFINS = 0.076f;
  const float PIS_PASEP = 0.0165f;

printf("Digite o preço inicial: ");
  scanf("%f", &pinicial);

  float vicms = ICMS * pinicial;
  float vcofins = COFINS * pinicial;
  float vpis_pasep = PIS_PASEP * pinicial;
  
  printf("valor ICMS: %f\n", vicms);
  printf("valor do COFINS: %f\n", vcofins);
  printf("valor do PIS/PASEP: %f\n", vpis_pasep);
  
  pfinal = (1 + ICMS + COFINS + PIS_PASEP) * pinicial;
  printf("o preço final com os impostos é: %f\n", pfinal);
  
  return 0;
}