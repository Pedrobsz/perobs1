//7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.

#include <stdio.h>
int main(){
float valorhoratrabalho = 150.00f;
float horastrabalhadas = 100.00f;
float salariobruto;
float salarioliquido;
const float IR = 0.25;
const float INSS = 0.11;

//printf("digite o total de horas trabalhadas no mes: ");
  //scanf("%f", &horastrabalhadas);

salariobruto = valorhoratrabalho * horastrabalhadas;
float impostorenda = salariobruto * IR;
float impostoprevi = salariobruto * INSS;
salarioliquido = salariobruto - impostorenda - impostoprevi;
  
printf("------------------------------\n");
printf("   C O N T R A C H E Q U E   \n");
printf("------------------------------\n");
printf("Salario bruto....: R$ %8.2f\n", salariobruto);
printf("Imposto renda....: R$ %8.2f\n", impostorenda);
printf("Imposto previ....: R$ %8.2f\n", impostoprevi);
printf("Salario liquido..: R$ %8.2f\n", salarioliquido);
printf("------------------------------\n");
  
  return 0;
}