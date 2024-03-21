//5.Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#include <stdio.h>

int main (){

long int byte;
const int gb = 1024;

printf("entre com um valor qualquer em gigabytes: ");
  scanf("%i", &byte);

int valor = byte * gb;

printf(" o valor acima convertido em bytes é: %i\n", valor); 
  
  return 0;
}