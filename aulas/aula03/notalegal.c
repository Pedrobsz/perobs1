#include <stdio.h>
int main(){
printf("--------------------------\n");
printf("    N O T A L E G A L    \n");
printf("--------------------------\n");
printf("ITEM         QTD VALOR   \n");
printf("%-13.10s %03i %8.2f\n","Banana nanica", 1, 15.00);
printf("%-13.10s %03i %8.2f\n","maca fuji", 10, 50.00);
printf("%-13.10s %03i %8.2f\n","uva globo", 5, 26.00);
printf("--------------------------\n");
printf("TOTAL.......... R$% 8.2f\n",91.00);
//printf("Banana nanica    1  15.00\n");
//printf("maça fuji       10  50.00\n");
//printf("uva globo        5  26.00\n");
  return 0;
}